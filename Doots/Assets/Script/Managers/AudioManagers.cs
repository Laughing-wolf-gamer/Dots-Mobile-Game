using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
public class AudioManagers : MonoBehaviour
{
    [SerializeField]private AudioSource mainMusic;
    [SerializeField]private AudioSource fire;
    [SerializeField]private AudioSource sheild;
    [SerializeField]private AudioSource electric;

    [SerializeField]private PlayerMove player;
    
    public void featureenable()
    {
        switch(player.GetFeature()){
                case FeatureType.speed:
                    mainMusic.volume = 0.1f;
                    fire.Play();
                    sheild.Pause();
                    electric.Pause();
                break;

                case FeatureType.None:
                    fire.Pause();
                    sheild.Pause();
                    electric.Pause();
                    mainMusic.volume = 0.3f;

                break;
                case FeatureType.c2move :
                    mainMusic.volume = 0.1f;
                    electric.Play();
                    fire.Pause();
                    sheild.Pause();
                break;
                case FeatureType.sheild:
                    mainMusic.volume = 0.1f;
                    sheild.Play();
                    fire.Pause();
                    sheild.Pause();
                break;

            }
        }
}
