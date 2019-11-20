# FatesCall

## Setup
- Download and install the Git LFS extension from https://git-lfs.github.com/ which adds support for large binary files
- Using a terminal that supports Git, navigate to the folder where you want your project folder to be created
- Use `git lfs clone https://github.com/IndecisionGames/FatesCall.git` to clone the project
- cd into `FatesCall` and run `git lfs install` 
- Open the `FatesCall` folder in Explorer then right click `FatesCall.uproject` and click `Generate Visual Studio Project files`
- Open Unreal Engine; in the projects tab click `Browse` at the bottom and navigate to and select `FatesCall.uproject`
- When prompted to rebuild modules, say `Yes`.
- Once it finishes loading, if you see a top-down scene with the "Fate's Call" written in orange then you have loaded the project correctly.
- (Optional) Click on `Source Control` -> `Connect Source Control` -> Set Provider to `Git` -> Accept Settings
- It is recommended to use external git tools, such as the command line/terminal to push and checkout changes.
