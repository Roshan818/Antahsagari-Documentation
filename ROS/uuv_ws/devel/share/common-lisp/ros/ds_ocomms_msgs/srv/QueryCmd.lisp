; Auto-generated. Do not edit!


(cl:in-package ds_ocomms_msgs-srv)


;//! \htmlinclude QueryCmd-request.msg.html

(cl:defclass <QueryCmd-request> (roslisp-msg-protocol:ros-message)
  ((QUERY_DESTINATION
    :reader QUERY_DESTINATION
    :initarg :QUERY_DESTINATION
    :type cl:string
    :initform ""))
)

(cl:defclass QueryCmd-request (<QueryCmd-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QueryCmd-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QueryCmd-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ds_ocomms_msgs-srv:<QueryCmd-request> is deprecated: use ds_ocomms_msgs-srv:QueryCmd-request instead.")))

(cl:ensure-generic-function 'QUERY_DESTINATION-val :lambda-list '(m))
(cl:defmethod QUERY_DESTINATION-val ((m <QueryCmd-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_ocomms_msgs-srv:QUERY_DESTINATION-val is deprecated.  Use ds_ocomms_msgs-srv:QUERY_DESTINATION instead.")
  (QUERY_DESTINATION m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QueryCmd-request>) ostream)
  "Serializes a message object of type '<QueryCmd-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'QUERY_DESTINATION))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'QUERY_DESTINATION))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QueryCmd-request>) istream)
  "Deserializes a message object of type '<QueryCmd-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'QUERY_DESTINATION) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'QUERY_DESTINATION) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QueryCmd-request>)))
  "Returns string type for a service object of type '<QueryCmd-request>"
  "ds_ocomms_msgs/QueryCmdRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryCmd-request)))
  "Returns string type for a service object of type 'QueryCmd-request"
  "ds_ocomms_msgs/QueryCmdRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QueryCmd-request>)))
  "Returns md5sum for a message object of type '<QueryCmd-request>"
  "7cd6a246318633a046eba9954702daff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QueryCmd-request)))
  "Returns md5sum for a message object of type 'QueryCmd-request"
  "7cd6a246318633a046eba9954702daff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QueryCmd-request>)))
  "Returns full string definition for message of type '<QueryCmd-request>"
  (cl:format cl:nil "string QUERY_DESTINATION~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QueryCmd-request)))
  "Returns full string definition for message of type 'QueryCmd-request"
  (cl:format cl:nil "string QUERY_DESTINATION~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QueryCmd-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'QUERY_DESTINATION))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QueryCmd-request>))
  "Converts a ROS message object to a list"
  (cl:list 'QueryCmd-request
    (cl:cons ':QUERY_DESTINATION (QUERY_DESTINATION msg))
))
;//! \htmlinclude QueryCmd-response.msg.html

(cl:defclass <QueryCmd-response> (roslisp-msg-protocol:ros-message)
  ((action
    :reader action
    :initarg :action
    :type cl:string
    :initform ""))
)

(cl:defclass QueryCmd-response (<QueryCmd-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QueryCmd-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QueryCmd-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ds_ocomms_msgs-srv:<QueryCmd-response> is deprecated: use ds_ocomms_msgs-srv:QueryCmd-response instead.")))

(cl:ensure-generic-function 'action-val :lambda-list '(m))
(cl:defmethod action-val ((m <QueryCmd-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ds_ocomms_msgs-srv:action-val is deprecated.  Use ds_ocomms_msgs-srv:action instead.")
  (action m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QueryCmd-response>) ostream)
  "Serializes a message object of type '<QueryCmd-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'action))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'action))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QueryCmd-response>) istream)
  "Deserializes a message object of type '<QueryCmd-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'action) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'action) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QueryCmd-response>)))
  "Returns string type for a service object of type '<QueryCmd-response>"
  "ds_ocomms_msgs/QueryCmdResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryCmd-response)))
  "Returns string type for a service object of type 'QueryCmd-response"
  "ds_ocomms_msgs/QueryCmdResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QueryCmd-response>)))
  "Returns md5sum for a message object of type '<QueryCmd-response>"
  "7cd6a246318633a046eba9954702daff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QueryCmd-response)))
  "Returns md5sum for a message object of type 'QueryCmd-response"
  "7cd6a246318633a046eba9954702daff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QueryCmd-response>)))
  "Returns full string definition for message of type '<QueryCmd-response>"
  (cl:format cl:nil "string action~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QueryCmd-response)))
  "Returns full string definition for message of type 'QueryCmd-response"
  (cl:format cl:nil "string action~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QueryCmd-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'action))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QueryCmd-response>))
  "Converts a ROS message object to a list"
  (cl:list 'QueryCmd-response
    (cl:cons ':action (action msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'QueryCmd)))
  'QueryCmd-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'QueryCmd)))
  'QueryCmd-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QueryCmd)))
  "Returns string type for a service object of type '<QueryCmd>"
  "ds_ocomms_msgs/QueryCmd")