using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
public enum Feature{None,spped,cmove,sheid,blastCoin};

public class Enemy : MonoBehaviour
{
    [SerializeField]private Color convertColor;
    [SerializeField]private Sprite circle;
    [SerializeField]private SpriteRenderer ownSprite;
    [SerializeField]private GameObject light2D;
    [SerializeField]private new ParticleSystem particleSystem;
    [SerializeField]private ParticleSystem particleSystemAFTER;
    [SerializeField]private GameManger gameManger;
    //==============Feature====================
    [SerializeField]private Feature feature;
    [SerializeField]private GameObject Speed;
    [SerializeField]private GameObject cMoves;
    [SerializeField]private GameObject sheild;
    [SerializeField]private GameObject icons;
    [SerializeField]private GameObject speedIcon;
    [SerializeField]private GameObject cmovesIcon;
    [SerializeField]private GameObject sheildIcon;
    [SerializeField]private GameObject blastcoin;
    [SerializeField]private Animator obstacle;
    [SerializeField]private GameObject ShockEffect;
    [SerializeField]private AudioSource waterDrop;
    
    private void Awake() {
        if(feature == Feature.None)
        {
            icons.SetActive(false);
        }
        else if(feature == Feature.spped)
        {
            speedIcon.SetActive(true);
        }
        else if(feature == Feature.cmove)
        {
            cmovesIcon.SetActive(true);
        }
        else if(feature == Feature.sheid)
        {
            sheildIcon.SetActive(true);
        }
        else if(feature == Feature.blastCoin)
        {
            blastcoin.SetActive(true);
        }
    }
    private void OnTriggerEnter2D(Collider2D other) {
        if(other.transform.CompareTag("Player"))
        {
            obstacle.SetBool("die",true);
            ownSprite.sprite = circle;
            if(transform.name != "startpoint" && transform.name != "finish")
            {
                waterDrop.Play();
            }
            StartCoroutine(flashLight());
            if(feature == Feature.spped)
            {
                Speed.SetActive(true);

            }
            else if(feature == Feature.cmove)
            {
                cMoves.SetActive(true);
            }
            else if(feature == Feature.sheid)
            {
                sheild.SetActive(true);

            }
            else if(feature == Feature.blastCoin)
            {
                UiManager.instane.blastSpread();
            }
        }
        else if(transform.name == "startpoint" || transform.name == "finish")
        {
            gameManger.GameWin();
            ShockEffectVisible();
        }
    }
    private void OnTriggerExit2D(Collider2D other) {
            if(feature == Feature.spped)
            {
                Speed.SetActive(false);

            }
            else if(feature == Feature.cmove)
            {
                cMoves.SetActive(false);
            }
            else if(feature == Feature.sheid)
            {
                sheild.SetActive(false);
                
            }
    }
    IEnumerator flashLight()
    {
        light2D.SetActive(true);
        particleSystem.Play();
        particleSystemAFTER.Play();
        yield return new WaitForSecondsRealtime(.2f);
        light2D.SetActive(false);
    }
    public bool isEqual(Feature toCheck){
        return feature == toCheck;
    }
    public void ShockEffectVisible()
    {
        ShockEffect.SetActive(true);
    }
}
