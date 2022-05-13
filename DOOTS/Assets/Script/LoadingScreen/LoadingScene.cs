using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class LoadingScene : MonoBehaviour
{

    private void Start() {
        
        StartCoroutine(firastsceneload());
        if(PlayerPrefs.GetInt("f") == 0)
        {
            PlayerPrefs.SetInt("f",1);

        }
        else 
        {
            PlayerPrefs.SetInt("f",2);
        }

    }
    IEnumerator firastsceneload()
    {
        yield return new WaitForSeconds(1.8f);
        if(PlayerPrefs.GetInt("f") == 1)
        {
            SceneManager.LoadSceneAsync("0");
        }
        else 
        {
            SceneManager.LoadSceneAsync(PlayerPrefs.GetString("level"));

        }

    }
    private void Update() {
        print(PlayerPrefs.GetString("level"));
    }
}
