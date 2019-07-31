
## This is a WIP of course

### Environment & setup
```bash
cd /cvmfs/cms.cern.ch/slc6_amd64_gcc700/cms/cmssw/CMSSW_10_2_9/ ; cmsenv ; cd -
cd NanoCORE
make -j8 # takes about 20 seconds
```

### Python dependencies (if desired)
```bash
# install uproot with python2.7 and python3
pip install uproot --user
pip3 install uproot --user
```
