<a id="top"></a>

# Test Relative Links

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Contents**

- [This page is temporary!](#this-page-is-temporary)
- [Relative links to .md files](#relative-links-to-md-files)
- [Relative links to images files](#relative-links-to-images-files)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->

## This page is temporary!

This page is for testing relative links in `mdsource/.source.md` and corresponding `.md` files, to see how they behave, after adopting this `mdsnippets` feature:
https://github.com/SimonCropp/MarkdownSnippets/issues/24

Scenarios to test:

* CLion editor
* Browsing on Github
* Viewing in [Working Copy iOS github client](https://workingcopyapp.com/)

Pages to test (NB On `mdsnippets_source_dir` branch):

* [doc/TestRelativeLinks.md](https://github.com/approvals/ApprovalTests.cpp/blob/mdsnippets_source_dir/doc/TestRelativeLinks.md#top)
* [doc/mdsource/TestRelativeLinks.source.md](https://github.com/approvals/ApprovalTests.cpp/blob/mdsnippets_source_dir/doc/mdsource/TestRelativeLinks.source.md#top)

## Relative links to .md files

| Link          | CLion             | Github UI             | Working Copy          |
| ------------- | ----------------- | --------------------- | --------------------- |
| [README.md#top](README.md#top)            | Link unresponsive in `.source.md`  | 404 in `.source.md` when clicked  | In `.md`, link opens in Working Copy editor - in `.md.source`, gives error message |
| [/doc/README.md#top](/doc/README.md#top)  | Opens link on github.com  | Works in .md and .source.md | In `.md`, link opens in Working Copy editor - in `.md.source`, opens Safari at `localhost` - so fails|

## Relative links to images files

| Link          | CLion             | Github UI             | Working Copy          |
| ------------- | ----------------- | --------------------- | --------------------- |
| ![images/ApprovalTests.cpp.IntroGraphic.gif?raw=true](images/ApprovalTests.cpp.IntroGraphic.gif?raw=true) | Shows as broken image | 404 in `.source.md` when clicked | Works in `.md`, just the descriptive test is shown in `.source.md` |
| ![/doc/images/ApprovalTests.cpp.IntroGraphic.gif?raw=true](/doc/images/ApprovalTests.cpp.IntroGraphic.gif?raw=true) | Shows as broken image | Works in `.md` and `.source.md`  | Works in `.md` and `.source.md` |

---

[Back to User Guide](README.md#top)