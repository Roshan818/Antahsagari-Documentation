# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_hotel_msgs/TrigPrmCtrlCmdRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg
import ds_hotel_msgs.msg

class TrigPrmCtrlCmdRequest(genpy.Message):
  _md5sum = "b66a0652742780c5136a1b821cd55dc5"
  _type = "ds_hotel_msgs/TrigPrmCtrlCmdRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint8 CHECK_PARAMS = 1
uint8 ENABLE_BOARD = 2
uint8 DISABLE_BOARD = 3
uint8 CONFIGURE_BOARD = 4

# command will be one of the constants listed above
uint8 command 

# An array of objects representing desired changes to trigger board channels, for example: 
# TriggerChannelConfig myconfig = { 
#- name: 'Channel 0'
#  specified_params:
#  - key: 'period'
#    value: '500'
#  - key: 'enabled'
#    value: 'false'
#- name: 'Channel 5'
#  specified_params:
#  - key: 'delays'
#    value: '[250,500]'}
TriggerChannelConfig[] channels_to_change

# An array of KeyString pairs representing desired changes to global parameters on the trigger board
# For example:
#ds_core_msgs/KeyString myconfig = {
#- key: 'sync'
#  value: 'false'
#- key: 'baudrate'
#  value: '9600'}
ds_core_msgs/KeyString[] global_params_to_change

# A flag indicating whether the service caller wants to:
# a) Just compare board parameters to the parameter server
# or 
# b) Compare board parameters to the parameter server and update the board to reflect the param server.
bool apply

================================================================================
MSG: ds_hotel_msgs/TriggerChannelConfig
string name
ds_core_msgs/KeyString[] specified_params


================================================================================
MSG: ds_core_msgs/KeyString
string key
string value
"""
  # Pseudo-constants
  CHECK_PARAMS = 1
  ENABLE_BOARD = 2
  DISABLE_BOARD = 3
  CONFIGURE_BOARD = 4

  __slots__ = ['command','channels_to_change','global_params_to_change','apply']
  _slot_types = ['uint8','ds_hotel_msgs/TriggerChannelConfig[]','ds_core_msgs/KeyString[]','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       command,channels_to_change,global_params_to_change,apply

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TrigPrmCtrlCmdRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.command is None:
        self.command = 0
      if self.channels_to_change is None:
        self.channels_to_change = []
      if self.global_params_to_change is None:
        self.global_params_to_change = []
      if self.apply is None:
        self.apply = False
    else:
      self.command = 0
      self.channels_to_change = []
      self.global_params_to_change = []
      self.apply = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.command
      buff.write(_get_struct_B().pack(_x))
      length = len(self.channels_to_change)
      buff.write(_struct_I.pack(length))
      for val1 in self.channels_to_change:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.specified_params)
        buff.write(_struct_I.pack(length))
        for val2 in val1.specified_params:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.global_params_to_change)
      buff.write(_struct_I.pack(length))
      for val1 in self.global_params_to_change:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.apply
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.channels_to_change is None:
        self.channels_to_change = None
      if self.global_params_to_change is None:
        self.global_params_to_change = None
      end = 0
      start = end
      end += 1
      (self.command,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.channels_to_change = []
      for i in range(0, length):
        val1 = ds_hotel_msgs.msg.TriggerChannelConfig()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.specified_params = []
        for i in range(0, length):
          val2 = ds_core_msgs.msg.KeyString()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.value = str[start:end]
          val1.specified_params.append(val2)
        self.channels_to_change.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.global_params_to_change = []
      for i in range(0, length):
        val1 = ds_core_msgs.msg.KeyString()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.global_params_to_change.append(val1)
      start = end
      end += 1
      (self.apply,) = _get_struct_B().unpack(str[start:end])
      self.apply = bool(self.apply)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.command
      buff.write(_get_struct_B().pack(_x))
      length = len(self.channels_to_change)
      buff.write(_struct_I.pack(length))
      for val1 in self.channels_to_change:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(val1.specified_params)
        buff.write(_struct_I.pack(length))
        for val2 in val1.specified_params:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.global_params_to_change)
      buff.write(_struct_I.pack(length))
      for val1 in self.global_params_to_change:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.apply
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.channels_to_change is None:
        self.channels_to_change = None
      if self.global_params_to_change is None:
        self.global_params_to_change = None
      end = 0
      start = end
      end += 1
      (self.command,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.channels_to_change = []
      for i in range(0, length):
        val1 = ds_hotel_msgs.msg.TriggerChannelConfig()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.specified_params = []
        for i in range(0, length):
          val2 = ds_core_msgs.msg.KeyString()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.value = str[start:end]
          val1.specified_params.append(val2)
        self.channels_to_change.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.global_params_to_change = []
      for i in range(0, length):
        val1 = ds_core_msgs.msg.KeyString()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.global_params_to_change.append(val1)
      start = end
      end += 1
      (self.apply,) = _get_struct_B().unpack(str[start:end])
      self.apply = bool(self.apply)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_hotel_msgs/TrigPrmCtrlCmdResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TrigPrmCtrlCmdResponse(genpy.Message):
  _md5sum = "e2b4c13b85324fb56648e216a74a4b45"
  _type = "ds_hotel_msgs/TrigPrmCtrlCmdResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Constants signifying whether the board is triggering or secured (enums for action_done)
uint8 BOARD_ENABLED = 1
uint8 BOARD_DISABLED = 2

# represents the overall success of the service call
bool is_successful

# More specifics on what the service call did
uint8 action_done

# Explains why the service failed (only used for board configuration checking right now)
string reason

"""
  # Pseudo-constants
  BOARD_ENABLED = 1
  BOARD_DISABLED = 2

  __slots__ = ['is_successful','action_done','reason']
  _slot_types = ['bool','uint8','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       is_successful,action_done,reason

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TrigPrmCtrlCmdResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.is_successful is None:
        self.is_successful = False
      if self.action_done is None:
        self.action_done = 0
      if self.reason is None:
        self.reason = ''
    else:
      self.is_successful = False
      self.action_done = 0
      self.reason = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.is_successful, _x.action_done))
      _x = self.reason
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.is_successful, _x.action_done,) = _get_struct_2B().unpack(str[start:end])
      self.is_successful = bool(self.is_successful)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reason = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.reason = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2B().pack(_x.is_successful, _x.action_done))
      _x = self.reason
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 2
      (_x.is_successful, _x.action_done,) = _get_struct_2B().unpack(str[start:end])
      self.is_successful = bool(self.is_successful)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reason = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.reason = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
class TrigPrmCtrlCmd(object):
  _type          = 'ds_hotel_msgs/TrigPrmCtrlCmd'
  _md5sum = '56daaa06d4b19989fbf8a0bdf220d270'
  _request_class  = TrigPrmCtrlCmdRequest
  _response_class = TrigPrmCtrlCmdResponse
