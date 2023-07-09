# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_nmea_msgs/Tro.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Tro(genpy.Message):
  _md5sum = "c00475fe2b979e82d555472287dde05e"
  _type = "ds_nmea_msgs/Tro"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#$PHTRO,x.xx,a,y.yy,b*hh<CR><LF>
#where:
#x.xx is the pitch in degrees
#a is ‘M’ for bow up
#a is ‘P’ for bow down
#y.yy is the roll in degrees
#b is ‘B’ for port down
#b is ‘T’ for port up

float64 pitch_deg
float64 roll_deg
uint8 checksum"""
  __slots__ = ['pitch_deg','roll_deg','checksum']
  _slot_types = ['float64','float64','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pitch_deg,roll_deg,checksum

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Tro, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pitch_deg is None:
        self.pitch_deg = 0.
      if self.roll_deg is None:
        self.roll_deg = 0.
      if self.checksum is None:
        self.checksum = 0
    else:
      self.pitch_deg = 0.
      self.roll_deg = 0.
      self.checksum = 0

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
      buff.write(_get_struct_2dB().pack(_x.pitch_deg, _x.roll_deg, _x.checksum))
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
      end += 17
      (_x.pitch_deg, _x.roll_deg, _x.checksum,) = _get_struct_2dB().unpack(str[start:end])
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
      buff.write(_get_struct_2dB().pack(_x.pitch_deg, _x.roll_deg, _x.checksum))
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
      end += 17
      (_x.pitch_deg, _x.roll_deg, _x.checksum,) = _get_struct_2dB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2dB = None
def _get_struct_2dB():
    global _struct_2dB
    if _struct_2dB is None:
        _struct_2dB = struct.Struct("<2dB")
    return _struct_2dB
