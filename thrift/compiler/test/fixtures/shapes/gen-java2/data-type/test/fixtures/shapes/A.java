/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.shapes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="A", builder=A.Builder.class)
public final class A implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public A(
        @com.facebook.swift.codec.ThriftField(value=1, name="a", requiredness=Requiredness.NONE) final String a
    ) {
        this.a = a;
    }
    
    @ThriftConstructor
    protected A() {
      this.a = null;
    }
    
    public static class Builder {
    
        private String a = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="a", requiredness=Requiredness.NONE)
        public Builder setA(String a) {
            this.a = a;
            return this;
        }
    
        public String getA() { return a; }
    
        public Builder() { }
        public Builder(A other) {
            this.a = other.a;
        }
    
        @ThriftConstructor
        public A build() {
            A result = new A (
                this.a
            );
            return result;
        }
    }
        public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("A");
    private final String a;
    public static final int _A = 1;
    private static final TField A_FIELD_DESC = new TField("a", TType.STRING, (short)1);
    static {
      NAMES_TO_IDS.put("a", 1);
      FIELD_METADATA.put(1, A_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="a", requiredness=Requiredness.NONE)
    public String getA() { return a; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("a", a);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        A other = (A)o;
    
        return
            Objects.equals(a, other.a) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            a
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<A> asReader() {
      return A::read0;
    }
    
    public static A read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(A.NAMES_TO_IDS, A.FIELD_METADATA);
      A.Builder builder = new A.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _A:
          if (__field.type == TType.STRING) {
            String a = oprot.readString();
            builder.setA(a);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.a != null) {
        oprot.writeFieldBegin(A_FIELD_DESC);
        oprot.writeString(this.a);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _ALazy {
        private static final A _DEFAULT = new A.Builder().build();
    }
    
    public static A defaultInstance() {
        return  _ALazy._DEFAULT;
    }
}
