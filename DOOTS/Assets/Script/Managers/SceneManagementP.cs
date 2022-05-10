using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
public class SceneManagementP : MonoBehaviour
{
    public void nextbutton()
    {
        StartCoroutine(waitNextScene());
    }
    IEnumerator waitNextScene()
    {
        yield return new WaitForSeconds(0.5f);
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex+1);

    }
    public void ReloadScene()
    {
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex);
    }
}
