// swift-tools-version:5.9.2
import PackageDescription

let package = Package(
    name: "hydra",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "hydra",
            targets: ["hydra"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "hydra",
            path: "./hydra.xcframework"
        ),
    ]
)
