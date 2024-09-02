import XCTest
import SwiftTreeSitter
import TreeSitterJsdoc

final class TreeSitterJsdocTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_jsdoc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading JSDoc grammar")
    }
}
