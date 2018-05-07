open BsReactNative;

let baseStyle =
  Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]));

let app = () =>
  <View style=baseStyle> <Text value="Reason Is Awesome" /> </View>;