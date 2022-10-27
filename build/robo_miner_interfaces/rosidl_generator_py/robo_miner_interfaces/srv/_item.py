# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robo_miner_interfaces:srv/Item.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Item_Request(type):
    """Metaclass of message 'Item_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.Item_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__item__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__item__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__item__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__item__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__item__request

            from robo_miner_interfaces.msg import FieldPoint
            if FieldPoint.__class__._TYPE_SUPPORT is None:
                FieldPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Item_Request(metaclass=Metaclass_Item_Request):
    """Message class 'Item_Request'."""

    __slots__ = [
        '_point',
    ]

    _fields_and_field_types = {
        'point': 'robo_miner_interfaces/FieldPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['robo_miner_interfaces', 'msg'], 'FieldPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from robo_miner_interfaces.msg import FieldPoint
        self.point = kwargs.get('point', FieldPoint())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.point != other.point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from robo_miner_interfaces.msg import FieldPoint
            assert \
                isinstance(value, FieldPoint), \
                "The 'point' field must be a sub message of type 'FieldPoint'"
        self._point = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Item_Response(type):
    """Metaclass of message 'Item_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.Item_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__item__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__item__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__item__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__item__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__item__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Item_Response(metaclass=Metaclass_Item_Response):
    """Message class 'Item_Response'."""

    __slots__ = [
        '_field',
        '_error',
    ]

    _fields_and_field_types = {
        'field': 'uint8',
        'error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.field = kwargs.get('field', int())
        self.error = kwargs.get('error', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.field != other.field:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def field(self):
        """Message field 'field'."""
        return self._field

    @field.setter
    def field(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'field' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'field' field must be an unsigned integer in [0, 255]"
        self._field = value

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'error' field must be of type 'bool'"
        self._error = value


class Metaclass_Item(type):
    """Metaclass of service 'Item'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robo_miner_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robo_miner_interfaces.srv.Item')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__item

            from robo_miner_interfaces.srv import _item
            if _item.Metaclass_Item_Request._TYPE_SUPPORT is None:
                _item.Metaclass_Item_Request.__import_type_support__()
            if _item.Metaclass_Item_Response._TYPE_SUPPORT is None:
                _item.Metaclass_Item_Response.__import_type_support__()


class Item(metaclass=Metaclass_Item):
    from robo_miner_interfaces.srv._item import Item_Request as Request
    from robo_miner_interfaces.srv._item import Item_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
