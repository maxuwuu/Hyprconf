modkey = "Mod4"
mousekey = "Mod4"

workspaces = ["1","2","3","4","5","6","7","8","9"]

layouts = [
  "MainAndVertStack",
  "MainAndHorizontalStack",
  "Monocle",
  "Grid"
]

insert_behavior = "bottom"
focus_behavior = "sloppy"
layout_mode = "Tag"

[[keybind]]
command = "Execute"
value = "alacritty"
modifier = ["Mod4"]
key = "Return"

[[keybind]]
command = "Execute"
value = "thunar"
modifier = ["Mod4"]
key = "f"

[[keybind]]
command = "Execute"
value = "rofi -show drun"
modifier = ["Mod4"]
key = "r"

[[keybind]]
command = "SoftReload"
modifier = ["Mod4","Shift"]
key = "r"

[[keybind]]
command = "Exit"
modifier = ["Mod4","Shift"]
key = "q"

[[keybind]]
command = "CloseWindow"
modifier = ["Mod4"]
key = "q"

[[keybind]]
command = "FocusWindowNext"
modifier = ["Mod4"]
key = "j"

[[keybind]]
command = "FocusWindowPrevious"
modifier = ["Mod4"]
key = "k"

[[keybind]]
command = "MoveWindowDown"
modifier = ["Mod4","Shift"]
key = "j"

[[keybind]]
command = "MoveWindowUp"
modifier = ["Mod4","Shift"]
key = "k"