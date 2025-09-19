#!/bin/bash
git status
git add .
git status
git commit -m "atualizacao projeto $(date '+%Y-%m-%d')"
git push
