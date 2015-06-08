{
  "targets": [
    {
      "target_name": "algorithms",
      "sources": [ "algorithms.cc" ],
      "include_dirs": [ "<!(node -e \"require('nan')\")" ]
    }
  ]
}
