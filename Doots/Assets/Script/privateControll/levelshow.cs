using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
public class levelshow : MonoBehaviour
{
    [SerializeField]private TextMeshProUGUI level;
    [SerializeField]private TextMeshProUGUI coinn;

    private void Start() {
        level.text ="#" + SceneManager.GetActiveScene().name;
        if(SceneManager.GetActiveScene().name == "1")
        {
            PlayerPrefs.SetInt("coin",200);
        }

    }
    private void Update() {
        coinn.text = PlayerPrefs.GetInt("coin").ToString();
    }
}
