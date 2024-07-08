//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Ur10Mover
{
    [Serializable]
    public class ExecutionServiceResponse : Message
    {
        public const string k_RosMessageName = "ur10_mover/ExecutionService";
        public override string RosMessageName => k_RosMessageName;

        public Trajectory.JointTrajectoryPointMsg[] joint_states;

        public ExecutionServiceResponse()
        {
            this.joint_states = new Trajectory.JointTrajectoryPointMsg[0];
        }

        public ExecutionServiceResponse(Trajectory.JointTrajectoryPointMsg[] joint_states)
        {
            this.joint_states = joint_states;
        }

        public static ExecutionServiceResponse Deserialize(MessageDeserializer deserializer) => new ExecutionServiceResponse(deserializer);

        private ExecutionServiceResponse(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.joint_states, Trajectory.JointTrajectoryPointMsg.Deserialize, deserializer.ReadLength());
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.WriteLength(this.joint_states);
            serializer.Write(this.joint_states);
        }

        public override string ToString()
        {
            return "ExecutionServiceResponse: " +
            "\njoint_states: " + System.String.Join(", ", joint_states.ToList());
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize, MessageSubtopic.Response);
        }
    }
}
