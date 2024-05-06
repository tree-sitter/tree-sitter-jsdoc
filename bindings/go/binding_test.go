package tree_sitter_jsdoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-jsdoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jsdoc.Language())
	if language == nil {
		t.Errorf("Error loading JSDoc grammar")
	}
}
