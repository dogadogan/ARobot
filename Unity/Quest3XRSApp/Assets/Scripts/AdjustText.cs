using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AdjustText : MonoBehaviour
{
    // Start is called before the first frame update
    public Slider Slider;
    public TextMeshProUGUI textMeshPro;
    
    // Update is called once per frame
    void Update()
    {
        textMeshPro.text = (Slider.value * 360).ToString("0.000") + "°";
    }
}
