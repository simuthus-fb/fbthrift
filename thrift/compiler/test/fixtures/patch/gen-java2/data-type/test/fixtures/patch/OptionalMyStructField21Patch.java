/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

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
@com.facebook.swift.codec.ThriftStruct(value="OptionalMyStructField21Patch", builder=OptionalMyStructField21Patch.Builder.class)
public final class OptionalMyStructField21Patch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public OptionalMyStructField21Patch(
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE) final test.fixtures.patch.MyStructField21Patch patch,
        @com.facebook.swift.codec.ThriftField(value=1, name="ensure", requiredness=Requiredness.OPTIONAL) final List<Short> ensure,
        @com.facebook.swift.codec.ThriftField(value=4, name="patchAfter", requiredness=Requiredness.NONE) final test.fixtures.patch.MyStructField21Patch patchAfter
    ) {
        this.clear = clear;
        this.patch = patch;
        this.ensure = ensure;
        this.patchAfter = patchAfter;
    }
    
    @ThriftConstructor
    protected OptionalMyStructField21Patch() {
      this.clear = false;
      this.patch = null;
      this.ensure = null;
      this.patchAfter = null;
    }
    
    public static class Builder {
    
        private boolean clear = false;
        private test.fixtures.patch.MyStructField21Patch patch = null;
        private List<Short> ensure = null;
        private test.fixtures.patch.MyStructField21Patch patchAfter = null;
    
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE)
        public Builder setPatch(test.fixtures.patch.MyStructField21Patch patch) {
            this.patch = patch;
            return this;
        }
    
        public test.fixtures.patch.MyStructField21Patch getPatch() { return patch; }
    
            @com.facebook.swift.codec.ThriftField(value=1, name="ensure", requiredness=Requiredness.OPTIONAL)
        public Builder setEnsure(List<Short> ensure) {
            this.ensure = ensure;
            return this;
        }
    
        public List<Short> getEnsure() { return ensure; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="patchAfter", requiredness=Requiredness.NONE)
        public Builder setPatchAfter(test.fixtures.patch.MyStructField21Patch patchAfter) {
            this.patchAfter = patchAfter;
            return this;
        }
    
        public test.fixtures.patch.MyStructField21Patch getPatchAfter() { return patchAfter; }
    
        public Builder() { }
        public Builder(OptionalMyStructField21Patch other) {
            this.clear = other.clear;
            this.patch = other.patch;
            this.ensure = other.ensure;
            this.patchAfter = other.patchAfter;
        }
    
        @ThriftConstructor
        public OptionalMyStructField21Patch build() {
            OptionalMyStructField21Patch result = new OptionalMyStructField21Patch (
                this.clear,
                this.patch,
                this.ensure,
                this.patchAfter
            );
            return result;
        }
    }
                    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("OptionalMyStructField21Patch");
    private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final test.fixtures.patch.MyStructField21Patch patch;
    public static final int _PATCH = 3;
    private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
        private final List<Short> ensure;
    public static final int _ENSURE = 1;
    private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.LIST, (short)1);
        private final test.fixtures.patch.MyStructField21Patch patchAfter;
    public static final int _PATCHAFTER = 4;
    private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)4);
    static {
      NAMES_TO_IDS.put("clear", 2);
      FIELD_METADATA.put(2, CLEAR_FIELD_DESC);
      NAMES_TO_IDS.put("patch", 3);
      FIELD_METADATA.put(3, PATCH_FIELD_DESC);
      NAMES_TO_IDS.put("ensure", 1);
      FIELD_METADATA.put(1, ENSURE_FIELD_DESC);
      NAMES_TO_IDS.put("patchAfter", 4);
      FIELD_METADATA.put(4, PATCH_AFTER_FIELD_DESC);
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyStructField21Patch getPatch() { return patch; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="ensure", requiredness=Requiredness.OPTIONAL)
    public List<Short> getEnsure() { return ensure; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="patchAfter", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyStructField21Patch getPatchAfter() { return patchAfter; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("clear", clear);
        helper.add("patch", patch);
        helper.add("ensure", ensure);
        helper.add("patchAfter", patchAfter);
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
    
        OptionalMyStructField21Patch other = (OptionalMyStructField21Patch)o;
    
        return
            Objects.equals(clear, other.clear) &&
    Objects.equals(patch, other.patch) &&
    Objects.equals(ensure, other.ensure) &&
    Objects.equals(patchAfter, other.patchAfter) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            clear,
            patch,
            ensure,
            patchAfter
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<OptionalMyStructField21Patch> asReader() {
      return OptionalMyStructField21Patch::read0;
    }
    
    public static OptionalMyStructField21Patch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(OptionalMyStructField21Patch.NAMES_TO_IDS, OptionalMyStructField21Patch.FIELD_METADATA);
      OptionalMyStructField21Patch.Builder builder = new OptionalMyStructField21Patch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CLEAR:
          if (__field.type == TType.BOOL) {
            boolean clear = oprot.readBool();
            builder.setClear(clear);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCH:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyStructField21Patch patch = test.fixtures.patch.MyStructField21Patch.read0(oprot);
            builder.setPatch(patch);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ENSURE:
          if (__field.type == TType.LIST) {
            List<Short> ensure;
            {
            TList _list = oprot.readListBegin();
            ensure = new ArrayList<Short>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                short _value1 = oprot.readI16();
                ensure.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setEnsure(ensure);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyStructField21Patch patchAfter = test.fixtures.patch.MyStructField21Patch.read0(oprot);
            builder.setPatchAfter(patchAfter);
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
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
      if (this.patch != null) {
        oprot.writeFieldBegin(PATCH_FIELD_DESC);
        this.patch.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.ensure != null) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        List<Short> _iter0 = this.ensure;
        oprot.writeListBegin(new TList(TType.I16, _iter0.size()));
        for (short _iter1 : _iter0) {
          oprot.writeI16(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      if (this.patchAfter != null) {
        oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
        this.patchAfter.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _OptionalMyStructField21PatchLazy {
        private static final OptionalMyStructField21Patch _DEFAULT = new OptionalMyStructField21Patch.Builder().build();
    }
    
    public static OptionalMyStructField21Patch defaultInstance() {
        return  _OptionalMyStructField21PatchLazy._DEFAULT;
    }
}
