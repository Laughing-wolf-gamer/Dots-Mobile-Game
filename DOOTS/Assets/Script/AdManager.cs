using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AdManager : MonoBehaviour
{

    [SerializeField] string _sdkKey;
    [SerializeField] string _bannerAdUnitId;
    [SerializeField] string _interstitialAdUnitId;
    [SerializeField] string _rewardAdUnitId;
    int interstitialRetryAttempt;
    int rewardRetryAttempt;


    public static bool speedPowerUp;
    public static bool sheildpowerUp;
    public static bool cmove;
    public static bool nevergiveup;
    public static bool blastCoin;


    public static AdManager instance;

    private void Awake()
    {
        DontDestroyOnLoad(this);
        instance = this;
        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) => {
            // AppLovin SDK is initialized, start loading ads
            InitializeBannerAds();
            InitializeInterstitialAds();
            InitializeRewardedAds();
        };

        MaxSdk.SetSdkKey(_sdkKey);
        MaxSdk.InitializeSdk();
    }

    #region BannerAdFunction

    public void InitializeBannerAds()
    {
        // Banners are automatically sized to 320�50 on phones and 728�90 on tablets
        // You may call the utility method MaxSdkUtils.isTablet() to help with view sizing adjustments
        MaxSdk.CreateBanner(_bannerAdUnitId, MaxSdkBase.BannerPosition.BottomCenter);

        MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
        MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdLoadFailedEvent;
        MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
        MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;
        MaxSdkCallbacks.Banner.OnAdExpandedEvent += OnBannerAdExpandedEvent;
        MaxSdkCallbacks.Banner.OnAdCollapsedEvent += OnBannerAdCollapsedEvent;
    }

    public void ShowBanner()
    {
        MaxSdk.ShowBanner(_bannerAdUnitId);
    }

    public void HideBanner()
    {
        MaxSdk.HideBanner(_bannerAdUnitId);
    }

    public void DestroyBanner()
    {
        MaxSdk.DestroyBanner(_bannerAdUnitId);
    }

    #endregion

    #region BannerAdHandler
    private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnBannerAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }

    private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnBannerAdExpandedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnBannerAdCollapsedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }
    #endregion

    #region InterstitialAdFunction

    public void InitializeInterstitialAds()
    {
        // Attach callback
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialLoadFailedEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterstitialDisplayedEvent;
        MaxSdkCallbacks.Interstitial.OnAdClickedEvent += OnInterstitialClickedEvent;
        MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialHiddenEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnInterstitialAdFailedToDisplayEvent;
        

        // Load the first interstitial
        LoadInterstitial();
    }

    private void LoadInterstitial()
    {
        MaxSdk.LoadInterstitial(_interstitialAdUnitId);
    }

    public void ShowInterstitial()
    {
        if (MaxSdk.IsInterstitialReady(_interstitialAdUnitId))
        {
            MaxSdk.ShowInterstitial(_interstitialAdUnitId);
        }
    }

    #endregion

    #region InterstitialAdHandler

    private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is ready for you to show. MaxSdk.IsInterstitialReady(adUnitId) now returns 'true'

        // Reset retry attempt
        interstitialRetryAttempt = 0;
    }

    private void OnInterstitialLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Interstitial ad failed to load 
        // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds)

        interstitialRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, interstitialRetryAttempt));

        Invoke("LoadInterstitial", (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad failed to display. AppLovin recommends that you load the next ad.
        LoadInterstitial();
    }

    private void OnInterstitialClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is hidden. Pre-load the next ad.
        // LoadInterstitial();

    }

    #endregion

    #region RewardAdFunction

    public void InitializeRewardedAds()
    {
        // Attach callback
        MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
        MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdLoadFailedEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnRewardedAdDisplayedEvent;
        MaxSdkCallbacks.Rewarded.OnAdClickedEvent += OnRewardedAdClickedEvent;
        MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;
        MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdHiddenEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
        MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;

        // Load the first rewarded ad
        LoadRewardedAd();
    }

    private void LoadRewardedAd()
    {
        MaxSdk.LoadRewardedAd(_rewardAdUnitId);
    }

    public void ShowReward()
    {
        if (MaxSdk.IsRewardedAdReady(_rewardAdUnitId))
        {
            MaxSdk.ShowRewardedAd(_rewardAdUnitId);
        }
    }

    #endregion

    #region RewardAdHandler

    private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is ready for you to show. MaxSdk.IsRewardedAdReady(adUnitId) now returns 'true'.

        // Reset retry attempt
        rewardRetryAttempt = 0;
    }

    private void OnRewardedAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Rewarded ad failed to load 
        // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds).

        rewardRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, rewardRetryAttempt));

        Invoke(nameof(LoadRewardedAd), (float)retryDelay);
    }

    private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad failed to display. AppLovin recommends that you load the next ad.
        LoadRewardedAd();
    }

    private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnRewardedAdHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is hidden. Pre-load the next ad
        LoadRewardedAd();
    }

    private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
    {
        // The rewarded ad displayed and the user should receive the reward.
        if(speedPowerUp){
            UiManager.instane.isFireFeatureAds();
            speedPowerUp = false;
        }
        else if(sheildpowerUp){
            UiManager.instane.issheidFeatureAds();
            sheildpowerUp = false;
        }
        else if(cmove)
        {
            UiManager.instane.iscmoveFeatureAds();
            cmove = false;
        }
        else if(nevergiveup)
        {
            UiManager.instane.PlayerReflect();
            nevergiveup = false;
        }
        else if(blastCoin)
        {
            UiManager.instane.coinblast();
            blastCoin = false;
        }
    }

    private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Ad revenue paid. Use this callback to track user revenue.
    }

    #endregion
}
