using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
public class tutorial : MonoBehaviour
{
    [SerializeField]private GameObject inputButton;
    [SerializeField]private TextMeshProUGUI text;
    [SerializeField]private GameObject next;
    string first = " ' TAP AND HOLD ' ";
    string second = " ' RELEASE ' ";
    private void Start() {
        StartCoroutine(loadText());
    }
    IEnumerator loadText()
    {
        yield return new WaitForSeconds(0.7f);
        foreach(char a in first.ToCharArray())
        {
            text.text += a;
            yield return new WaitForSeconds(0.02f);
        }
        inputButton.SetActive(true);
    }
    public void tapandhold()
    {
        StartCoroutine(NDLOAD());
    }
    IEnumerator NDLOAD()
    {
        text.text = null;
        yield return new WaitForSeconds(0.7f);
        foreach(char a in second.ToCharArray())
        {
            text.text += a;
            yield return new WaitForSeconds(0.02f);
        }

    }
    public void holdup()
    {
        text.gameObject.SetActive(false);
    }

}
