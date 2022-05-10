using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UiManager : MonoBehaviour
{
    [SerializeField]private SceneManagementP scene;
    [SerializeField]private GameManger gameManger;
    [SerializeField]private InputManager input;
    [SerializeField]private Transform nxtbuttonShock;
    [SerializeField]private SceneManagementP sceneManagement;
    //---------ALL ANIMATOR-----------


    //--------ALL GAMEOBJECTS-----------
    [SerializeField]private GameObject menu;
    [SerializeField]private GameObject RunningUi;
    [SerializeField]private GameObject revivePanel;
    
    private void Update() {

        nxtbuttonShock.position = input.returnscreenpoint();
      
    }

    //-UI Button-
    public void MenuButton()
    {
        menu.SetActive(true);
        RunningUi.SetActive(false);
    }
    public void ExitButtonMenu()
    {
        menu.SetActive(false);
        RunningUi.SetActive(true);
    }

    public void RevivePannel()
    {
        revivePanel.SetActive(true);
    }







    public void nextbutton()
    {
        nxtbuttonShock.gameObject.SetActive(true);
        StartCoroutine(nexttton());
    }
    IEnumerator nexttton()
    {
        yield return new WaitForSeconds(0.4f);
        sceneManagement.nextbutton();
    }
}
