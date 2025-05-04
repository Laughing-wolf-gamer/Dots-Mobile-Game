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
    [SerializeField]private Animator mainmenu;

    //--------ALL GAMEOBJECTS-----------
    [SerializeField]private GameObject menu;
    [SerializeField]private GameObject RunningUi;
    [SerializeField]private GameObject revivePanel;
    [SerializeField]private bool mainmenubool;
    [SerializeField]private GameObject inputButton;
    [SerializeField]private PlayerMove player;
    [SerializeField]private Image speed;
    [SerializeField]private GameObject speedplus;
    [SerializeField]private Image sheid;
    [SerializeField]private GameObject sheidplus;
    [SerializeField]private Image c2move;
    [SerializeField]private GameObject c2moveplus;
    [SerializeField]private GameObject nointernetpopUp;
    [SerializeField]private GameObject RetryText;
    [SerializeField]private GameObject loadingbar;
    [SerializeField]private GameObject alreadyFeature;
    [SerializeField]private PlayerDamage playerDamage;
    [SerializeField]private GameObject RETRYsCREEN;
    [SerializeField]private GameObject pleseWait;
    [SerializeField]private GameObject blastCoin;
    [SerializeField]private GameObject notificationIconMainmenu;
    [SerializeField]private GameObject notificationIcon;
    [SerializeField] private TimeManager timeManager;
    [SerializeField]private GameObject COINVLASTEXPLOSION;
    public static UiManager instane{get;private set;}
    private void Awake(){
        if(instane == null){
            instane = this;
        }else{
            Destroy(instane.gameObject);
        }
        
    }
    private void Start() {
        TimerReady();
    }
    IEnumerator inputbuttonopen()
    {
        yield return new WaitForSeconds(1);
        inputButton.SetActive(true);
    }
    private void Update() {

        nxtbuttonShock.position = input.returnscreenpoint();
    }

    //-UI Button-
    public void MenuButton()
    {
        if(!mainmenubool)
        {
            mainmenu.SetTrigger("open");
            mainmenubool = true;
            inputButton.SetActive(false);
        }
        else if(mainmenu)
        {
            mainmenu.SetTrigger("close");
            mainmenubool = false;
            inputButton.SetActive(true);
        }
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


    public void FireFeatureenable()
    {
        if(player.GetFeature() != FeatureType.None)
        {
            alreadyFeature.SetActive(true);
        }
        else
        {
			nointerNetPopUp();
        }


    }
    public void SheidFeatureEnable()
    {
        if(player.GetFeature() != FeatureType.None)
        {
            alreadyFeature.SetActive(true);
        }
        else
        {
			nointerNetPopUp();
        }


    }
    public void cmovefeatureenable()
    {
        if(player.GetFeature() != FeatureType.None)
        {
            alreadyFeature.SetActive(true);
        }
        else
        {
			nointerNetPopUp();
        }


    }
    public void isFireFeatureAds()
    {
        player.speedexternal();
        speed.color = new Color32(255,255,255,255);
        speedplus.SetActive(false);
    }
    public void issheidFeatureAds()
    {
        player.sheidexternal();
        sheid.color = new Color32(255,255,255,255);
        sheidplus.SetActive(false);
    }
    public void iscmoveFeatureAds()
    {
        player.cmoveexternal();
        c2move.color = new Color32(255,255,255,255);
        c2moveplus.SetActive(false);
    }

    public void feautureNormal()
    {
        speed.color = sheid.color = c2move.color  = new Color32(255,255,255,150);
        speedplus.SetActive(true);
        c2moveplus.SetActive(true);
        sheidplus.SetActive(true);

    }

    public void nointerNetPopUp()
    {
        nointernetpopUp.SetActive(true);
        inputButton.SetActive(false);
    }
    public void RetryInternet()
    {
        StartCoroutine(checkInternt());
    }
    IEnumerator checkInternt()
    {
        RetryText.SetActive(false);
        loadingbar.SetActive(true);
        yield return new WaitForSeconds(1);
        if(Application.internetReachability == NetworkReachability.NotReachable)
        {
            RetryText.SetActive(true);
            loadingbar.SetActive(false);
        }
        else if(Application.internetReachability == NetworkReachability.ReachableViaLocalAreaNetwork)
        {
            inputButton.SetActive(true);
            nointernetpopUp.SetActive(false);
        }
        else if(Application.internetReachability == NetworkReachability.ReachableViaCarrierDataNetwork)
        {
            inputButton.SetActive(true);
            nointernetpopUp.SetActive(false);
        }
    }

    public void AlreadyFeature()
    {
        alreadyFeature.SetActive(false);
    }
    //------------------nevergiveup ads-----------------
    public void NeverGiveUpBut()
    {
        PlayerReflect();
    }
    public void giveupBut()
    {
        inputButton.SetActive(false);
        RunningUi.SetActive(false);
        revivePanel.SetActive(false);
        RETRYsCREEN.SetActive(true);
        
    }
    public void PlayerReflect()
    {
        revivePanel.SetActive(false);
    }
    public void blastSpread()
    {
        blastCoin.SetActive(true);
    }
    public void coinblastno()
    {
        blastCoin.SetActive(false);
    }
    public void coinblastyes()
    {
		nointerNetPopUp();
    }
    public void coinblast()
    {
        PlayerPrefs.SetInt("coin",PlayerPrefs.GetInt("coin")+200);
        COINVLASTEXPLOSION.SetActive(true);
        blastCoin.SetActive(false);
    }
    public void ThemeCalled()
    {
        notificationIconMainmenu.SetActive(false);
        timeManager.Click();
        
    }
    public void TimerReady()
    {
        notificationIconMainmenu.SetActive(true);
    }
}
