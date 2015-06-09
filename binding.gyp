{
  "targets": [
    {
      "target_name": "algorithms",
      "sources": [ "algorithms.cc", "src/algorithms/sort/sort.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
