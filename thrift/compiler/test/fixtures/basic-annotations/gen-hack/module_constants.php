<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class module_CONSTANTS implements \IThriftConstants {
  /**
   * Original thrift constant:-
   * struct module.MyStruct myStruct
   */
  <<__Memoize>>
  public static function myStruct()[]: MyStruct{
    return MyStruct::fromShape(
      shape(
        "major" => 42,
        "package" => "package",
        "my_enum" => MyEnum::DOMAIN,
      )
    );
  }


  public static function getAllStructuredAnnotations()[]: dict<string, dict<string, \IThriftStruct>> {
    return dict[
    ];
  }
}

