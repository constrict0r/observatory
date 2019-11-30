# Configuration for Sphinx documentation builder.

import os
import sys

project = "observatory"
copyright = "2019, constrict0r"
author = "constrict0r"
version = "0.0.1"
release = "0.0.1"

sys.path.insert(0, os.path.abspath("../.."))

extensions = [
    "sphinxcontrib.restbuilder",
    "sphinxcontrib.globalsubs",
    "sphinx-prompt",
    "sphinx_substitution_extensions"
]

templates_path = ["_templates"]

exclude_patterns = []

html_static_path = ["_static"]

html_theme = "sphinx_rtd_theme"

master_doc = "index"

img_url_base = "https://gitlab.com/"

img_url_part = "/raw/master/img/"

img_url = img_url_base + author + "/" + project + img_url_part

ci_url_base = "https://gitlab.com/"

ci_url = ci_url_base + author + "/" + project + "/pipelines"

global_substitutions = {
    "AUTHOR_IMG": ".. image:: " + img_url + "/author.png\n   :alt: author",
    "AUTHOR_SLOGAN": "The travelling vaudeville villain.",
    "REPO_LINK":  "`Gitlab repository <https://gitlab.com/" + author + "/"
    + project + ">`_.",
    "PROJECT": project,
    "READTHEDOCS_BADGE": ".. image:: https://readthedocs.org/projects/"
    + project + "/badge\n   :alt: readthedocs",
    "READTHEDOCS_LINK": "`readthedocs <https://" + project +
    ".readthedocs.io/en/latest/>`_."
}

substitutions = [
    ("|AUTHOR|", author),
    ("|PROJECT|", project)
]
