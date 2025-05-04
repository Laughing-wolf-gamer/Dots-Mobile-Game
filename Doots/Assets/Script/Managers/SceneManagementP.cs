using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
public class SceneManagementP : MonoBehaviour
{
    private void Awake() {
        PlayerPrefs.SetString("level",SceneManager.GetActiveScene().name);
    }
    public void nextbutton()
    {
        StartCoroutine(waitNextScene());
    }
    IEnumerator waitNextScene()
    {
        yield return new WaitForSeconds(0.5f);
        PlayerPrefs.SetInt("coin",PlayerPrefs.GetInt("coin")+20);
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex+1);

    }
    public void ReloadScene()
    {
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex);
    }
}
