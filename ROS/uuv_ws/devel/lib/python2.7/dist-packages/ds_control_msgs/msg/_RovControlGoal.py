# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_control_msgs/RovControlGoal.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg
import ds_nav_msgs.msg
import genpy
import std_msgs.msg

class RovControlGoal(genpy.Message):
  _md5sum = "16732e294833366747b3f7a226dfc8ec"
  _type = "ds_control_msgs/RovControlGoal"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message mostly wraps the AggregatedState message we normally use, but
# also adds auto modes
bool auto_heading
bool auto_depth
bool auto_xy

ds_nav_msgs/AggregatedState goal

================================================================================
MSG: ds_nav_msgs/AggregatedState
# The standard 2-part DsHeader block
# This allows both a standard ROS header and DS-specific header blocks
# See HEADERS.md in ds_core_msgs for details
std_msgs/Header header
ds_core_msgs/DsHeader ds_header

# Position
FlaggedDouble northing
FlaggedDouble easting
FlaggedDouble down
FlaggedDouble roll
FlaggedDouble pitch
FlaggedDouble heading

# Rates
FlaggedDouble surge_u
FlaggedDouble sway_v
FlaggedDouble heave_w
FlaggedDouble p
FlaggedDouble q
FlaggedDouble r

# Accelerations
FlaggedDouble du_dt
FlaggedDouble dv_dt
FlaggedDouble dw_dt
FlaggedDouble dp_dt
FlaggedDouble dq_dt
FlaggedDouble dr_dt

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: ds_core_msgs/DsHeader
# This is half our standard header for ds_msgs; see
# HEADERS.md for details

# This header should ALWAYS be paired with a std_msgs/Header
# and should ALWAYS reference HEADERS.md.  If you're looking at this
# file to add headers to a type, you probably want to copy/paste
# the following block:
#
#     # The standard 2-part DsHeader block
#     # This allows both a standard ROS header and DS-specific header blocks
#     # See HEADERS.md in ds_core_msgs for details
#     std_msgs/Header header
#     ds_core_msgs/DsHeader ds_header
#

# Time data was received or sent out (i/o time)
time io_time

# Sensor source UUID
uint8[16] source_uuid


================================================================================
MSG: ds_nav_msgs/FlaggedDouble
# This enum states whether or not a particular DOF value is valid
uint8 VALUE_INVALID=0
uint8 VALUE_VALID=1

float64 value
uint8   valid"""
  __slots__ = ['auto_heading','auto_depth','auto_xy','goal']
  _slot_types = ['bool','bool','bool','ds_nav_msgs/AggregatedState']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       auto_heading,auto_depth,auto_xy,goal

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RovControlGoal, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.auto_heading is None:
        self.auto_heading = False
      if self.auto_depth is None:
        self.auto_depth = False
      if self.auto_xy is None:
        self.auto_xy = False
      if self.goal is None:
        self.goal = ds_nav_msgs.msg.AggregatedState()
    else:
      self.auto_heading = False
      self.auto_depth = False
      self.auto_xy = False
      self.goal = ds_nav_msgs.msg.AggregatedState()

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
      buff.write(_get_struct_3B3I().pack(_x.auto_heading, _x.auto_depth, _x.auto_xy, _x.goal.header.seq, _x.goal.header.stamp.secs, _x.goal.header.stamp.nsecs))
      _x = self.goal.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.goal.ds_header.io_time.secs, _x.goal.ds_header.io_time.nsecs))
      _x = self.goal.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB().pack(_x.goal.northing.value, _x.goal.northing.valid, _x.goal.easting.value, _x.goal.easting.valid, _x.goal.down.value, _x.goal.down.valid, _x.goal.roll.value, _x.goal.roll.valid, _x.goal.pitch.value, _x.goal.pitch.valid, _x.goal.heading.value, _x.goal.heading.valid, _x.goal.surge_u.value, _x.goal.surge_u.valid, _x.goal.sway_v.value, _x.goal.sway_v.valid, _x.goal.heave_w.value, _x.goal.heave_w.valid, _x.goal.p.value, _x.goal.p.valid, _x.goal.q.value, _x.goal.q.valid, _x.goal.r.value, _x.goal.r.valid, _x.goal.du_dt.value, _x.goal.du_dt.valid, _x.goal.dv_dt.value, _x.goal.dv_dt.valid, _x.goal.dw_dt.value, _x.goal.dw_dt.valid, _x.goal.dp_dt.value, _x.goal.dp_dt.valid, _x.goal.dq_dt.value, _x.goal.dq_dt.valid, _x.goal.dr_dt.value, _x.goal.dr_dt.valid))
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
      if self.goal is None:
        self.goal = ds_nav_msgs.msg.AggregatedState()
      end = 0
      _x = self
      start = end
      end += 15
      (_x.auto_heading, _x.auto_depth, _x.auto_xy, _x.goal.header.seq, _x.goal.header.stamp.secs, _x.goal.header.stamp.nsecs,) = _get_struct_3B3I().unpack(str[start:end])
      self.auto_heading = bool(self.auto_heading)
      self.auto_depth = bool(self.auto_depth)
      self.auto_xy = bool(self.auto_xy)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.goal.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal.ds_header.io_time.secs, _x.goal.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.goal.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 162
      (_x.goal.northing.value, _x.goal.northing.valid, _x.goal.easting.value, _x.goal.easting.valid, _x.goal.down.value, _x.goal.down.valid, _x.goal.roll.value, _x.goal.roll.valid, _x.goal.pitch.value, _x.goal.pitch.valid, _x.goal.heading.value, _x.goal.heading.valid, _x.goal.surge_u.value, _x.goal.surge_u.valid, _x.goal.sway_v.value, _x.goal.sway_v.valid, _x.goal.heave_w.value, _x.goal.heave_w.valid, _x.goal.p.value, _x.goal.p.valid, _x.goal.q.value, _x.goal.q.valid, _x.goal.r.value, _x.goal.r.valid, _x.goal.du_dt.value, _x.goal.du_dt.valid, _x.goal.dv_dt.value, _x.goal.dv_dt.valid, _x.goal.dw_dt.value, _x.goal.dw_dt.valid, _x.goal.dp_dt.value, _x.goal.dp_dt.valid, _x.goal.dq_dt.value, _x.goal.dq_dt.valid, _x.goal.dr_dt.value, _x.goal.dr_dt.valid,) = _get_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB().unpack(str[start:end])
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
      buff.write(_get_struct_3B3I().pack(_x.auto_heading, _x.auto_depth, _x.auto_xy, _x.goal.header.seq, _x.goal.header.stamp.secs, _x.goal.header.stamp.nsecs))
      _x = self.goal.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.goal.ds_header.io_time.secs, _x.goal.ds_header.io_time.nsecs))
      _x = self.goal.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self
      buff.write(_get_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB().pack(_x.goal.northing.value, _x.goal.northing.valid, _x.goal.easting.value, _x.goal.easting.valid, _x.goal.down.value, _x.goal.down.valid, _x.goal.roll.value, _x.goal.roll.valid, _x.goal.pitch.value, _x.goal.pitch.valid, _x.goal.heading.value, _x.goal.heading.valid, _x.goal.surge_u.value, _x.goal.surge_u.valid, _x.goal.sway_v.value, _x.goal.sway_v.valid, _x.goal.heave_w.value, _x.goal.heave_w.valid, _x.goal.p.value, _x.goal.p.valid, _x.goal.q.value, _x.goal.q.valid, _x.goal.r.value, _x.goal.r.valid, _x.goal.du_dt.value, _x.goal.du_dt.valid, _x.goal.dv_dt.value, _x.goal.dv_dt.valid, _x.goal.dw_dt.value, _x.goal.dw_dt.valid, _x.goal.dp_dt.value, _x.goal.dp_dt.valid, _x.goal.dq_dt.value, _x.goal.dq_dt.valid, _x.goal.dr_dt.value, _x.goal.dr_dt.valid))
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
      if self.goal is None:
        self.goal = ds_nav_msgs.msg.AggregatedState()
      end = 0
      _x = self
      start = end
      end += 15
      (_x.auto_heading, _x.auto_depth, _x.auto_xy, _x.goal.header.seq, _x.goal.header.stamp.secs, _x.goal.header.stamp.nsecs,) = _get_struct_3B3I().unpack(str[start:end])
      self.auto_heading = bool(self.auto_heading)
      self.auto_depth = bool(self.auto_depth)
      self.auto_xy = bool(self.auto_xy)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.goal.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.goal.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.goal.ds_header.io_time.secs, _x.goal.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.goal.ds_header.source_uuid = str[start:end]
      _x = self
      start = end
      end += 162
      (_x.goal.northing.value, _x.goal.northing.valid, _x.goal.easting.value, _x.goal.easting.valid, _x.goal.down.value, _x.goal.down.valid, _x.goal.roll.value, _x.goal.roll.valid, _x.goal.pitch.value, _x.goal.pitch.valid, _x.goal.heading.value, _x.goal.heading.valid, _x.goal.surge_u.value, _x.goal.surge_u.valid, _x.goal.sway_v.value, _x.goal.sway_v.valid, _x.goal.heave_w.value, _x.goal.heave_w.valid, _x.goal.p.value, _x.goal.p.valid, _x.goal.q.value, _x.goal.q.valid, _x.goal.r.value, _x.goal.r.valid, _x.goal.du_dt.value, _x.goal.du_dt.valid, _x.goal.dv_dt.value, _x.goal.dv_dt.valid, _x.goal.dw_dt.value, _x.goal.dw_dt.valid, _x.goal.dp_dt.value, _x.goal.dp_dt.valid, _x.goal.dq_dt.value, _x.goal.dq_dt.valid, _x.goal.dr_dt.value, _x.goal.dr_dt.valid,) = _get_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_16B = None
def _get_struct_16B():
    global _struct_16B
    if _struct_16B is None:
        _struct_16B = struct.Struct("<16B")
    return _struct_16B
_struct_16s = None
def _get_struct_16s():
    global _struct_16s
    if _struct_16s is None:
        _struct_16s = struct.Struct("<16s")
    return _struct_16s
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3B3I = None
def _get_struct_3B3I():
    global _struct_3B3I
    if _struct_3B3I is None:
        _struct_3B3I = struct.Struct("<3B3I")
    return _struct_3B3I
_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB = None
def _get_struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB():
    global _struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB
    if _struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB is None:
        _struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB = struct.Struct("<dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB")
    return _struct_dBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdBdB