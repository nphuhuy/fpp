// ======================================================================
// \title  PrimitiveF32eArrayAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PrimitiveF32e array
// ======================================================================

#include <cstdio>
#include <cstring>

#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"
#include "PrimitiveF32eArrayAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  PrimitiveF32e ::
    PrimitiveF32e() :
      Serializable()
  {
    // Construct using element-wise constructor
    *this = PrimitiveF32e(
      1.0f,
      1.0f,
      1.0f
    );
  }

  PrimitiveF32e ::
    PrimitiveF32e(const ElementType (&a)[SIZE]) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
  }

  PrimitiveF32e ::
    PrimitiveF32e(const ElementType& e) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = e;
    }
  }

  PrimitiveF32e ::
    PrimitiveF32e(
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

  PrimitiveF32e ::
    PrimitiveF32e(const PrimitiveF32e& obj) :
      Serializable()
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  PrimitiveF32e::ElementType& PrimitiveF32e ::
    operator[](const U32 i)
  {
    FW_ASSERT(i < SIZE);
    return this->elements[i];
  }

  const PrimitiveF32e::ElementType& PrimitiveF32e ::
    operator[](const U32 i) const
  {
    FW_ASSERT(i < SIZE);
    return this->elements[i];
  }

  PrimitiveF32e& PrimitiveF32e ::
    operator=(const PrimitiveF32e& obj)
  {
    if (this == &obj) {
      return *this;
    }

    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = obj.elements[index];
    }
    return *this;
  }

  PrimitiveF32e& PrimitiveF32e ::
    operator=(const ElementType (&a)[SIZE])
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = a[index];
    }
    return *this;
  }

  PrimitiveF32e& PrimitiveF32e ::
    operator=(const ElementType& e)
  {
    for (U32 index = 0; index < SIZE; index++) {
      this->elements[index] = e;
    }
    return *this;
  }

  bool PrimitiveF32e ::
    operator==(const PrimitiveF32e& obj) const
  {
    for (U32 index = 0; index < SIZE; index++) {
      if (!((*this)[index] == obj[index])) {
        return false;
      }
    }
    return true;
  }

  bool PrimitiveF32e ::
    operator!=(const PrimitiveF32e& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const PrimitiveF32e& obj) {
    Fw::String s;
    obj.toString(s);
    os << s;
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  Fw::SerializeStatus PrimitiveF32e ::
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

  Fw::SerializeStatus PrimitiveF32e ::
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

  void PrimitiveF32e ::
    toString(Fw::StringBase& sb) const
  {
    static const char *formatString = "[ "
      "%.3e "
      "%.3e "
      "%.3e ]";

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
