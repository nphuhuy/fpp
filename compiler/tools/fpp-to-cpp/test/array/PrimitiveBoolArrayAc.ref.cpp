// ======================================================================
// \title  PrimitiveBoolArrayAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PrimitiveBool array
// ======================================================================

#include <cstdio>
#include <cstring>

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"
#include "PrimitiveBoolArrayAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  PrimitiveBool ::
    PrimitiveBool() :
      Serializable()
  {
    // Construct using element-wise constructor
    *this = PrimitiveBool(
      false,
      false,
      false
    );
  }

  PrimitiveBool ::
    PrimitiveBool(const ElementType (&a)[SIZE]) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
  }

  PrimitiveBool ::
    PrimitiveBool(const ElementType& e) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = e;
    }
  }

  PrimitiveBool ::
    PrimitiveBool(
        const ElementType& e1,
        const ElementType& e2,
        const ElementType& e3
    ) :
      Serializable()
  {
    this->elements[0] = e1;
    this->elements[1] = e2;
    this->elements[2] = e3;
  }

  PrimitiveBool ::
    PrimitiveBool(const PrimitiveBool& obj) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  PrimitiveBool::ElementType& PrimitiveBool ::
    operator[](const U32 i)
  {
    FW_ASSERT(i < SIZE);
    return this->elements[i];
  }

  const PrimitiveBool::ElementType& PrimitiveBool ::
    operator[](const U32 i) const
  {
    FW_ASSERT(i < SIZE);
    return this->elements[i];
  }

  PrimitiveBool& PrimitiveBool ::
    operator=(const PrimitiveBool& obj)
  {
    if (this == &obj) {
      return *this;
    }

    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
    return *this;
  }

  PrimitiveBool& PrimitiveBool ::
    operator=(const ElementType (&a)[SIZE])
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
    return *this;
  }

  PrimitiveBool& PrimitiveBool ::
    operator=(const ElementType& e)
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = e;
    }
    return *this;
  }

  bool PrimitiveBool ::
    operator==(const PrimitiveBool& obj) const
  {
    for (U32 index = 0; index < SIZE; index++) {
      if (!((*this)[index] == obj[index])) {
        return false;
      }
    }
    return true;
  }

  bool PrimitiveBool ::
    operator!=(const PrimitiveBool& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const PrimitiveBool& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  Fw::SerializeStatus PrimitiveBool ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
    for (U32 index = 0; index < SIZE; index++) {
      status = buffer.serialize((*this)[index]);
      if (status != Fw::FW_SERIALIZE_OK) {
        return status;
      }
    }
    return status;
  }

  Fw::SerializeStatus PrimitiveBool ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    Fw::SerializeStatus status = Fw::FW_SERIALIZE_OK;
    for (U32 index = 0; index < SIZE; index++) {
      status = buffer.deserialize((*this)[index]);
      if (status != Fw::FW_SERIALIZE_OK) {
        return status;
      }
    }
    return status;
  }

#if FW_ARRAY_TO_STRING || BUILD_UT

  void PrimitiveBool ::
    toString(Fw::StringBase& sb) const
  {
    static const char *formatString = "[ "
      "%d "
      "%d "
      "%d ]";

    char outputString[FW_ARRAY_TO_STRING_BUFFER_SIZE];
    (void) snprintf(
      outputString,
      FW_ARRAY_TO_STRING_BUFFER_SIZE,
      formatString,
      this->elements[0],
      this->elements[1],
      this->elements[2]
    );

    outputString[FW_ARRAY_TO_STRING_BUFFER_SIZE-1] = 0; // NULL terminate
    sb = outputString;
  }

#endif

}
