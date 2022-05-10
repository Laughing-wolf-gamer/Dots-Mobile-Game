using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class LoadingScene : MonoBehaviour
{
    private void Start() {
        
        StartCoroutine(firastsceneload());
    }
    IEnumerator firastsceneload()
    {
        yield return new WaitForSeconds(1.8f);
        SceneManager.LoadSceneAsync("1");

    }
}
