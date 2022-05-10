using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
public class GameFeel : MonoBehaviour
{
    [SerializeField]private CinemachineVirtualCamera virtualCamera;
    [SerializeField]private SpriteRenderer onwsprite;
    [SerializeField]private Color red;
    [SerializeField]private Color white;
    CinemachineBasicMultiChannelPerlin channelPerlin;
    [SerializeField]private GameObject redVignete;
    [SerializeField]private GameObject LightfREEpOINT;
    [SerializeField]private UiManager uiManager;
    private void Start() {
        channelPerlin = virtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
    }
    public void Hit(float duration)
    {
        StartCoroutine(HitPause(duration));
        StartCoroutine(shakeCamera());
    }
    IEnumerator shakeCamera()
    {
        channelPerlin.m_AmplitudeGain = 5;
        yield return new WaitForSeconds(.2f);
        channelPerlin.m_AmplitudeGain = 0;

    }
    IEnumerator HitPause(float duration)
    {
        Time.timeScale = 0f;
        LightfREEpOINT.SetActive(true);
        yield return new WaitForSecondsRealtime(duration);
        LightfREEpOINT.SetActive(true);
        Time.timeScale = 1.0f;
    }

    public void PlayerHit()
    {
        StartCoroutine(playerHitdelay());
    }
    IEnumerator playerHitdelay()
    {
        onwsprite.color = red;
        yield return new WaitForSeconds(.1f);
        onwsprite.color = white;
        uiManager.RevivePannel();

    }
    
}

