// ======================================================================
// \title  C_EEnumAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for C_E enum
// ======================================================================

#include <cstring>
#include <limits>

#include "Fw/Types/Assert.hpp"
#include "C_EEnumAc.hpp"

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

C_E& C_E ::
  operator=(const C_E& obj)
{
  this->e = obj.e;
  return *this;
}

C_E& C_E ::
  operator=(T e)
{
  this->e = e;
  return *this;
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const C_E& obj) {
  Fw::String s;
  obj.toString(s);
  os << s;
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

bool C_E ::
  isValid() const
{
  return ((e >= X) && (e <= Y));
}

Fw::SerializeStatus C_E ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  const Fw::SerializeStatus status = buffer.serialize(
      static_cast<SerialType>(this->e)
  );
  return status;
}

Fw::SerializeStatus C_E ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  SerialType es;
  Fw::SerializeStatus status = buffer.deserialize(es);
  if (status == Fw::FW_SERIALIZE_OK) {
    this->e = static_cast<T>(es);
    if (!this->isValid()) {
      status = Fw::FW_DESERIALIZE_FORMAT_ERROR;
    }
  }
  return status;
}

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

void C_E ::
  toString(Fw::StringBase& sb) const
{
  Fw::String s;
  switch (e) {
    case X:
      s = "X";
      break;
    case Y:
      s = "Y";
      break;
    default:
      s = "[invalid]";
      break;
  }
  sb.format("%s (%" PRIi32 ")", s.toChar(), e);
}

#elif FW_ENABLE_TEXT_LOGGING

void SerializeType ::
  toString(Fw::StringBase& sb) const
{
  sb.format("%" PRIi32 "", e);
}

#endif
