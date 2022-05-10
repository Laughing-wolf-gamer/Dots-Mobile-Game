using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class reviveTimer : MonoBehaviour
{
    [SerializeField]private float timer = 5;
    [SerializeField]private Slider timerSlider;
    [SerializeField]private GameObject RetryMENU;
    [SerializeField]private GameObject runnigUi;
    private void Update() {
        timer = timer  - 1 * Time.deltaTime;
        timerSlider.value = timer;
        if(timer <= 0)
        {
            timer = 5;
            RetryMENU.SetActive(true);
            runnigUi.SetActive(false);

            gameObject.SetActive(false);
        }
    }
}
