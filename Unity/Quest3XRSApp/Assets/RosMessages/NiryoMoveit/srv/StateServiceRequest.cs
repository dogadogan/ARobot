//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.NiryoMoveit
{
    [Serializable]
    public class StateServiceRequest : Message
    {
        public const string k_RosMessageName = "niryo_moveit/StateService";
        public override string RosMessageName => k_RosMessageName;

        public string input_msg;

        public StateServiceRequest()
        {
            this.input_msg = "";
        }

        public StateServiceRequest(string input_msg)
        {
            this.input_msg = input_msg;
        }

        public static StateServiceRequest Deserialize(MessageDeserializer deserializer) => new StateServiceRequest(deserializer);

        private StateServiceRequest(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.input_msg);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.input_msg);
        }

        public override string ToString()
        {
            return "StateServiceRequest: " +
            "\ninput_msg: " + input_msg.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}
