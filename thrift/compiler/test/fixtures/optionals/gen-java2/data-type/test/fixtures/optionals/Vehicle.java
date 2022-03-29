/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.optionals;

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
@com.facebook.swift.codec.ThriftStruct(value="Vehicle", builder=Vehicle.Builder.class)
public final class Vehicle implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public Vehicle(
        @com.facebook.swift.codec.ThriftField(value=1, name="color", requiredness=Requiredness.NONE) final test.fixtures.optionals.Color color,
        @com.facebook.swift.codec.ThriftField(value=2, name="licensePlate", requiredness=Requiredness.OPTIONAL) final String licensePlate,
        @com.facebook.swift.codec.ThriftField(value=3, name="description", requiredness=Requiredness.OPTIONAL) final String description,
        @com.facebook.swift.codec.ThriftField(value=4, name="name", requiredness=Requiredness.OPTIONAL) final String name,
        @com.facebook.swift.codec.ThriftField(value=5, name="hasAC", requiredness=Requiredness.OPTIONAL) final Boolean hasAC
    ) {
        this.color = color;
        this.licensePlate = licensePlate;
        this.description = description;
        this.name = name;
        this.hasAC = hasAC;
    }
    
    @ThriftConstructor
    protected Vehicle() {
      this.color = null;
      this.licensePlate = null;
      this.description = null;
      this.name = null;
      this.hasAC = null;
    }
    
    public static class Builder {
    
        private test.fixtures.optionals.Color color = null;
        private String licensePlate = null;
        private String description = null;
        private String name = null;
        private Boolean hasAC = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="color", requiredness=Requiredness.NONE)
        public Builder setColor(test.fixtures.optionals.Color color) {
            this.color = color;
            return this;
        }
    
        public test.fixtures.optionals.Color getColor() { return color; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="licensePlate", requiredness=Requiredness.OPTIONAL)
        public Builder setLicensePlate(String licensePlate) {
            this.licensePlate = licensePlate;
            return this;
        }
    
        public String getLicensePlate() { return licensePlate; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="description", requiredness=Requiredness.OPTIONAL)
        public Builder setDescription(String description) {
            this.description = description;
            return this;
        }
    
        public String getDescription() { return description; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="name", requiredness=Requiredness.OPTIONAL)
        public Builder setName(String name) {
            this.name = name;
            return this;
        }
    
        public String getName() { return name; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="hasAC", requiredness=Requiredness.OPTIONAL)
        public Builder setHasAC(Boolean hasAC) {
            this.hasAC = hasAC;
            return this;
        }
    
        public Boolean isHasAC() { return hasAC; }
    
        public Builder() { }
        public Builder(Vehicle other) {
            this.color = other.color;
            this.licensePlate = other.licensePlate;
            this.description = other.description;
            this.name = other.name;
            this.hasAC = other.hasAC;
        }
    
        @ThriftConstructor
        public Vehicle build() {
            Vehicle result = new Vehicle (
                this.color,
                this.licensePlate,
                this.description,
                this.name,
                this.hasAC
            );
            return result;
        }
    }
                        public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("Vehicle");
    private final test.fixtures.optionals.Color color;
    public static final int _COLOR = 1;
    private static final TField COLOR_FIELD_DESC = new TField("color", TType.STRUCT, (short)1);
        private final String licensePlate;
    public static final int _LICENSEPLATE = 2;
    private static final TField LICENSE_PLATE_FIELD_DESC = new TField("licensePlate", TType.STRING, (short)2);
        private final String description;
    public static final int _DESCRIPTION = 3;
    private static final TField DESCRIPTION_FIELD_DESC = new TField("description", TType.STRING, (short)3);
        private final String name;
    public static final int _NAME = 4;
    private static final TField NAME_FIELD_DESC = new TField("name", TType.STRING, (short)4);
        private final Boolean hasAC;
    public static final int _HASAC = 5;
    private static final TField HAS_AC_FIELD_DESC = new TField("hasAC", TType.BOOL, (short)5);
    static {
      NAMES_TO_IDS.put("color", 1);
      FIELD_METADATA.put(1, COLOR_FIELD_DESC);
      NAMES_TO_IDS.put("licensePlate", 2);
      FIELD_METADATA.put(2, LICENSE_PLATE_FIELD_DESC);
      NAMES_TO_IDS.put("description", 3);
      FIELD_METADATA.put(3, DESCRIPTION_FIELD_DESC);
      NAMES_TO_IDS.put("name", 4);
      FIELD_METADATA.put(4, NAME_FIELD_DESC);
      NAMES_TO_IDS.put("hasAC", 5);
      FIELD_METADATA.put(5, HAS_AC_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="color", requiredness=Requiredness.NONE)
    public test.fixtures.optionals.Color getColor() { return color; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="licensePlate", requiredness=Requiredness.OPTIONAL)
    public String getLicensePlate() { return licensePlate; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="description", requiredness=Requiredness.OPTIONAL)
    public String getDescription() { return description; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="name", requiredness=Requiredness.OPTIONAL)
    public String getName() { return name; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="hasAC", requiredness=Requiredness.OPTIONAL)
    public Boolean isHasAC() { return hasAC; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("color", color);
        helper.add("licensePlate", licensePlate);
        helper.add("description", description);
        helper.add("name", name);
        helper.add("hasAC", hasAC);
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
    
        Vehicle other = (Vehicle)o;
    
        return
            Objects.equals(color, other.color) &&
    Objects.equals(licensePlate, other.licensePlate) &&
    Objects.equals(description, other.description) &&
    Objects.equals(name, other.name) &&
    Objects.equals(hasAC, other.hasAC) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            color,
            licensePlate,
            description,
            name,
            hasAC
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<Vehicle> asReader() {
      return Vehicle::read0;
    }
    
    public static Vehicle read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(Vehicle.NAMES_TO_IDS, Vehicle.FIELD_METADATA);
      Vehicle.Builder builder = new Vehicle.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _COLOR:
          if (__field.type == TType.STRUCT) {
            test.fixtures.optionals.Color color = test.fixtures.optionals.Color.read0(oprot);
            builder.setColor(color);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _LICENSEPLATE:
          if (__field.type == TType.STRING) {
            String licensePlate = oprot.readString();
            builder.setLicensePlate(licensePlate);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DESCRIPTION:
          if (__field.type == TType.STRING) {
            String description = oprot.readString();
            builder.setDescription(description);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _NAME:
          if (__field.type == TType.STRING) {
            String name = oprot.readString();
            builder.setName(name);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _HASAC:
          if (__field.type == TType.BOOL) {
            Boolean hasAC = oprot.readBool();
            builder.setHasAC(hasAC);
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
      if (this.color != null) {
        oprot.writeFieldBegin(COLOR_FIELD_DESC);
        this.color.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.licensePlate != null) {
        oprot.writeFieldBegin(LICENSE_PLATE_FIELD_DESC);
        oprot.writeString(this.licensePlate);
        oprot.writeFieldEnd();
      }
      if (this.description != null) {
        oprot.writeFieldBegin(DESCRIPTION_FIELD_DESC);
        oprot.writeString(this.description);
        oprot.writeFieldEnd();
      }
      if (this.name != null) {
        oprot.writeFieldBegin(NAME_FIELD_DESC);
        oprot.writeString(this.name);
        oprot.writeFieldEnd();
      }
      if (this.hasAC != null) {
        oprot.writeFieldBegin(HAS_AC_FIELD_DESC);
        oprot.writeBool(this.hasAC);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _VehicleLazy {
        private static final Vehicle _DEFAULT = new Vehicle.Builder().build();
    }
    
    public static Vehicle defaultInstance() {
        return  _VehicleLazy._DEFAULT;
    }
}
