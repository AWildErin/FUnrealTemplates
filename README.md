# FUnreal Templates

This is currently only usable for 5.1+ projects.  
If you wish to use this for <5.1, you need to enable UE4 support on all classes (If using UE4, else you can skip this step), and remove all instances of UE_INLINE_GENERATED_CPP_BY_NAME

## How to use
1. Clone the repo to a path
2. Copy the path to `FUnrealTemplates.json`
3. Install [FUnreal](https://marketplace.visualstudio.com/items?itemName=fdefelici.vs-funreal)
4. Open Visual Studio, Go to Extensions > FUnreal > Options... and set `Descriptor Path` to be the path to `FUnrealTemplates.json`, set `Templates Mode` to be "Custom", and set `Use Built-In Classes` to "False"
5. Press Extensions > FUnreal > Reload Templates
6. The custom templates are setup and ready to use!