# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_core_msgs/IoCommandList.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg

class IoCommandList(genpy.Message):
  _md5sum = "b4ee4558288587381a36af223b93c336"
  _type = "ds_core_msgs/IoCommandList"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """IoCommand[] cmds
================================================================================
MSG: ds_core_msgs/IoCommand
# The command's state machine ID.  Managed by the state machine
uint64 id

# The command to send
string command

# Send the received buffer out on matching
bool emitOnMatch

# Send a warning on timeout
bool timeoutWarn

# Force the next message to come from the same queue.
# Useful when you need to run two commands (e.g., address + command)
bool forceNext

# Send an error message on state transition guard condition check
bool stateTransErr

# Delay before sending the command, in milliseconds
float32 delayBefore_ms

# Delay After receiving a reply, in milliseconds
float32 delayAfter_ms

# The maximum amount of time (in milliseconds) to wait for
# a reply.  A timeout <= 0 means "wait forever"
float32 timeout_ms

"""
  __slots__ = ['cmds']
  _slot_types = ['ds_core_msgs/IoCommand[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmds

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(IoCommandList, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.cmds is None:
        self.cmds = []
    else:
      self.cmds = []

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
      length = len(self.cmds)
      buff.write(_struct_I.pack(length))
      for val1 in self.cmds:
        _x = val1.id
        buff.write(_get_struct_Q().pack(_x))
        _x = val1.command
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_4B3f().pack(_x.emitOnMatch, _x.timeoutWarn, _x.forceNext, _x.stateTransErr, _x.delayBefore_ms, _x.delayAfter_ms, _x.timeout_ms))
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
      if self.cmds is None:
        self.cmds = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cmds = []
      for i in range(0, length):
        val1 = ds_core_msgs.msg.IoCommand()
        start = end
        end += 8
        (val1.id,) = _get_struct_Q().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.command = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.command = str[start:end]
        _x = val1
        start = end
        end += 16
        (_x.emitOnMatch, _x.timeoutWarn, _x.forceNext, _x.stateTransErr, _x.delayBefore_ms, _x.delayAfter_ms, _x.timeout_ms,) = _get_struct_4B3f().unpack(str[start:end])
        val1.emitOnMatch = bool(val1.emitOnMatch)
        val1.timeoutWarn = bool(val1.timeoutWarn)
        val1.forceNext = bool(val1.forceNext)
        val1.stateTransErr = bool(val1.stateTransErr)
        self.cmds.append(val1)
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
      length = len(self.cmds)
      buff.write(_struct_I.pack(length))
      for val1 in self.cmds:
        _x = val1.id
        buff.write(_get_struct_Q().pack(_x))
        _x = val1.command
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_4B3f().pack(_x.emitOnMatch, _x.timeoutWarn, _x.forceNext, _x.stateTransErr, _x.delayBefore_ms, _x.delayAfter_ms, _x.timeout_ms))
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
      if self.cmds is None:
        self.cmds = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cmds = []
      for i in range(0, length):
        val1 = ds_core_msgs.msg.IoCommand()
        start = end
        end += 8
        (val1.id,) = _get_struct_Q().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.command = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.command = str[start:end]
        _x = val1
        start = end
        end += 16
        (_x.emitOnMatch, _x.timeoutWarn, _x.forceNext, _x.stateTransErr, _x.delayBefore_ms, _x.delayAfter_ms, _x.timeout_ms,) = _get_struct_4B3f().unpack(str[start:end])
        val1.emitOnMatch = bool(val1.emitOnMatch)
        val1.timeoutWarn = bool(val1.timeoutWarn)
        val1.forceNext = bool(val1.forceNext)
        val1.stateTransErr = bool(val1.stateTransErr)
        self.cmds.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4B3f = None
def _get_struct_4B3f():
    global _struct_4B3f
    if _struct_4B3f is None:
        _struct_4B3f = struct.Struct("<4B3f")
    return _struct_4B3f
_struct_Q = None
def _get_struct_Q():
    global _struct_Q
    if _struct_Q is None:
        _struct_Q = struct.Struct("<Q")
    return _struct_Q
