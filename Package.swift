// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJSDoc",
    products: [
        .library(name: "TreeSitterJSDoc", targets: ["TreeSitterJSDoc"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJSDoc",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterJSDocTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterJSDoc",
            ],
            path: "bindings/swift/TreeSitterJSDocTests"
        )
    ],
    cLanguageStandard: .c11
)
