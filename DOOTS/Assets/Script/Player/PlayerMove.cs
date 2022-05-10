using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum FeatureType{None,speed,c2move,sheild};

public class PlayerMove : MonoBehaviour
{
    [SerializeField]private Transform[] targets;
    [SerializeField]private Transform firstTargetBody;
    [SerializeField]private float speed;
    [SerializeField]private InputManager input;
    [SerializeField]private new GameObject light;
    [SerializeField]private LineRenderer line;
    [SerializeField]private LineRenderer connectedLine;
    [SerializeField]private Transform StartingPoint;
    [SerializeField]private GameFeel gameFeel;
    [SerializeField]private GameObject lineOwn;
    [SerializeField]private PlayerDamage playerdamage;
    [SerializeField]private GameManger gameManger;
    [SerializeField]private float hitSecond;
    [SerializeField]private AudioManagers featureAudio;

    //=======player feature mode=========
    [SerializeField]private FeatureType feature;
    
    bool TriggerBool;
    bool canMove;
    int targerIndex;
    bool isRunning;
    private void Update() {
        if(input.isTouchHoldUp())
        {
            canMove = true;
        }
        else if(canMove)
        {
            input.isInputEnablefALSE();
            float step = speed * Time.deltaTime;
            if(targets[targerIndex] != null)
            {
                transform.position = Vector2.MoveTowards(transform.position,targets[targerIndex].transform.position,step);
            }
        }
        //-------------------linerenderer----------------------------------
        if(targerIndex == 0)
        {
            line.SetPosition(0,StartingPoint.transform.position);
            line.SetPosition(1,transform.position);  
            
        }
        else if(targets[targerIndex - 1] != null)
        {
            line.SetPosition(0,targets[targerIndex-1].transform.position);
            line.SetPosition(1,transform.position);
        }
        connectedLine.positionCount = targerIndex+1;
        if(targerIndex == 1)
        {
            connectedLine.SetPosition(0,StartingPoint.transform.position);
            connectedLine.SetPosition(1,targets[0].transform.position);
        }
        else if(targerIndex > 1)
        {
            connectedLine.SetPosition(0,StartingPoint.transform.position);
            for(int i = 1 ; i <= targerIndex;i++)
            {
                connectedLine.SetPosition(i,targets[i-1].transform.position);
            }
        }


    }
    private void OnTriggerEnter2D(Collider2D other) {

        if(!TriggerBool)
        {
            if(other.transform.CompareTag("Enemy"))
            {
                lineOwn.SetActive(true);
                speed = 5;
                input.isInputEnabletrue();
                TriggerBool = true;
                // featureAudio.featureenable();
                StartCoroutine(triggerFalse());
                transform.position = targets[targerIndex].position;
                targerIndex += 1;
                //-----------
                stopPlayer();
                //-----------------
                
                if(targerIndex == 1)
                {
                    StartingPoint.gameObject.GetComponent<CircleCollider2D>().enabled = true;
                }
                if(other.TryGetComponent<Enemy>(out Enemy enemy)){
                    if(enemy.isEqual(Feature.spped))
                    {
                        feature = FeatureType.speed;
                        speed = 20;
                    }
                    else if(enemy.isEqual(Feature.cmove))
                    {
                        feature = FeatureType.c2move;
                    }
                    else if(enemy.isEqual(Feature.sheid))
                    {
                        feature = FeatureType.sheild;
                    }
                    else if(enemy.isEqual(Feature.None))
                    {
                        feature = FeatureType.None;
                    }
                }
            }
            if(TriggerBool)
            {
                gameFeel.Hit(hitSecond);
            }
        }

    }
    public Transform targetbody()
    {
        return targets[targerIndex];
    }
    IEnumerator triggerFalse()
    {
        yield return new WaitForSeconds(.2f);
        TriggerBool = false;
    }
    public void CanMoveFalse()
    {
        canMove = false;
        lineOwn.SetActive(false);
        // playerdamage.Damage();
    }




    public Transform[] targetsReturn()
    {
        return targets;
    }
    public float returntargetIndex()
    {
        return targerIndex;
    }
    public bool IsrUNNING()
    {
        return isRunning;
    }

    public FeatureType GetFeature(){
        return feature;
    }
    public void TargetIndexchange()
    {
        lineOwn.SetActive(false);
        targerIndex = targerIndex - 1;
    }
    public void stopPlayer()
    {
        if(feature == FeatureType.c2move)
        {
            canMove = true;
            isRunning = true;
        }
        else
        {
            canMove = false;
            isRunning = false;            
        }
    }
}
