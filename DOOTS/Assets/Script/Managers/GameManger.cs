using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManger : MonoBehaviour
{
    

    [SerializeField]private CameraTarget cameraTarget;
    [SerializeField]private GameObject nextbutton;
    [SerializeField]private PlayerMove playerMove;
    bool winSituation;

    private void Awake() {
        
    }
    private void Start() {
        
        

    }
    public void GameWin()
    {
        cameraTarget.reavel();
        NextScene();
        winSituation = true;
    }
    public void NextScene()
    {
        nextbutton.SetActive(true);
        for(int i = 0; i <= playerMove.targetsReturn().Length;i++)
        {
            playerMove.targetsReturn()[i].GetComponent<Enemy>().ShockEffectVisible();
            playerMove.targetsReturn()[i].GetComponent<AudioSource>().Play();
        }
    }
    public bool returnbool()
    {
        return winSituation;
    }

}
