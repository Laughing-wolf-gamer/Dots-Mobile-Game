using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDamage : MonoBehaviour
{
    [SerializeField]private Color white;
    [SerializeField]private Color red;
    [SerializeField]private SpriteRenderer ownBody;
    [SerializeField]private PlayerMove playerMove;
    [SerializeField]private GameFeel gameFeel;
    [SerializeField]private PlayerAnimator playerAnimator;
    [SerializeField]private UiManager uiManager;
    float timer;
    private Coroutine reflectRoutine;
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.transform.CompareTag("Obstacle"))
        {
            switch(playerMove.GetFeature()){
                case FeatureType.speed:
                    Damage();
                break;

                case FeatureType.None:
                    Damage();

                break;

                case FeatureType.sheild:
                    StartCoroutine(reflect());

                break;

            }

            
        }
    }
    public void Damage()
    {
        gameFeel.PlayerHit();
        playerMove.CanMoveFalse();
        
    }
    IEnumerator reflect()
    {
        Time.timeScale = 0.00f;
        playerMove.TargetIndexchange();
        yield return new WaitForSecondsRealtime(0.2f);
        Time.timeScale = 1f;
    }
}
