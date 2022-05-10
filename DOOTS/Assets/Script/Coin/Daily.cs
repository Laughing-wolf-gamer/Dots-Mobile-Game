using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Daily : MonoBehaviour
{
    [SerializeField]private GameObject reawrdpanel;
    [SerializeField]private GameObject GETreawrd;

    [SerializeField]private GameObject moneysaanimation;
    public void clickDaily()
    {
        GETreawrd.SetActive(true);
    }
    public void reawrdpanelclick()
    {
        moneysaanimation.SetActive(true);
        reawrdpanel.SetActive(false);
    }
    public void closerearwd()
    {
        reawrdpanel.SetActive(false);
    }
}
