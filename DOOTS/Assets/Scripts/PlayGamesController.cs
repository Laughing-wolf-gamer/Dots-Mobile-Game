using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class PlayGamesController : MonoBehaviour {

    public TextMeshProUGUI mainText;

    private void Start()
    {
        AuthenticateUser();
    }
    
    void AuthenticateUser()
    {
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.Activate();
        Social.localUser.Authenticate((bool success) =>
        {
            if (success == true)
            {
                Debug.Log("Logged in to Google Play Games Services");

                // SceneManager.LoadScene("LeaderboardUI");
            }
            else
            {
                Debug.LogError("Unable to sign in to Google Play Games Services");
                mainText.text = "Could not login to Google Play Games Services";
                mainText.color = Color.red;
            }
            Invoke(nameof(ChangeScene),0.5f);
        });
        
    }
    private void ChangeScene(){
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
        // Do What You want afte signin.
    }

    public static void PostToLeaderboard(long newScore)
    {
        
    }

    public static void ShowLeaderboardUI()
    {
        // PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_high_score);
    }
}
