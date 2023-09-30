
# Defining a library of sources called "turtle-lib"
cc_library(
    name = "turtle-lib",
    # no sources, just headers
    hdrs = [
        "ITurtle.h", 
        "BigTurtle.h",
        "Painter.h",
        ],
    # must give visibility to the test package
    visibility = ["//test:__pkg__"],
)