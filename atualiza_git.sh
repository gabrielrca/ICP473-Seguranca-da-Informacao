#!/bin/bash
git status
git add .
git commit -m "atualizacao projeto $(date '+%Y-%m-%d')"
git push
