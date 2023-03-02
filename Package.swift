// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "SVGKit",
    platforms: [
        .macOS(.v10_10),
        .iOS(.v13),
        .tvOS(.v13)
    ],
    products: [
        .library(
            name: "SVGKit",
            targets: ["SVGKit"]
        )
    ],
    targets: [
        .target(
            name: "SVGKit",
            path: "Source"
        )
    ]
)
