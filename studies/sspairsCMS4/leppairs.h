#ifndef LEPPAIRS_H
#define LEPPAIRS_H

class LeppairsTree {

    /**
     * TTree automatically generated by mktree
     */
    
    /* Initialize branches */
    TBranch* b_run;
    TBranch* b_lumi;
    TBranch* b_event;

    TBranch* b_jets_pt;
    TBranch* b_jets_eta;
    TBranch* b_jets_phi;
    TBranch* b_jets_id;
    TBranch* b_jets_btag;

    TBranch* b_lep1_id;
    TBranch* b_lep1_idlevel;
    TBranch* b_lep1_iso;
    TBranch* b_lep1_multiiso;
    TBranch* b_lep1_miniiso;
    TBranch* b_lep1_ptrel;
    TBranch* b_lep1_ptratio;
    TBranch* b_lep1_isel;
    TBranch* b_lep1_ismu;
    TBranch* b_lep1_isneg;
    TBranch* b_lep1_p4;
    TBranch* b_lep1_pt;
    TBranch* b_lep1_eta;
    TBranch* b_lep1_phi;
    TBranch* b_jet1_p4;
    TBranch* b_jet1_pt;
    TBranch* b_jet1_eta;
    TBranch* b_jet1_phi;

    TBranch* b_lep2_id;
    TBranch* b_lep2_idlevel;
    TBranch* b_lep2_iso;
    TBranch* b_lep2_multiiso;
    TBranch* b_lep2_miniiso;
    TBranch* b_lep2_ptrel;
    TBranch* b_lep2_ptratio;
    TBranch* b_lep2_isel;
    TBranch* b_lep2_ismu;
    TBranch* b_lep2_isneg;
    TBranch* b_lep2_p4;
    TBranch* b_lep2_pt;
    TBranch* b_lep2_eta;
    TBranch* b_lep2_phi;
    TBranch* b_jet2_p4;
    TBranch* b_jet2_pt;
    TBranch* b_jet2_eta;
    TBranch* b_jet2_phi;

    TBranch* b_pair_pt;
    TBranch* b_pair_ss;
    TBranch* b_pair_hyp;

    TBranch* b_lep3_id;
    TBranch* b_lep3_idlevel;
    TBranch* b_lep3_iso;
    TBranch* b_lep3_multiiso;
    TBranch* b_lep3_miniiso;
    TBranch* b_lep3_ptrel;
    TBranch* b_lep3_ptratio;
    TBranch* b_lep3_isel;
    TBranch* b_lep3_ismu;
    TBranch* b_lep3_isneg;
    TBranch* b_lep3_p4;
    TBranch* b_lep3_pt;
    TBranch* b_lep3_eta;
    TBranch* b_lep3_phi;
    TBranch* b_jet3_p4;
    TBranch* b_jet3_pt;
    TBranch* b_jet3_eta;
    TBranch* b_jet3_phi;
    
    TBranch* b_lep4_id;
    TBranch* b_lep4_idlevel;
    TBranch* b_lep4_iso;
    TBranch* b_lep4_multiiso;
    TBranch* b_lep4_miniiso;
    TBranch* b_lep4_ptrel;
    TBranch* b_lep4_ptratio;
    TBranch* b_lep4_isel;
    TBranch* b_lep4_ismu;
    TBranch* b_lep4_isneg;
    TBranch* b_lep4_p4;
    TBranch* b_lep4_pt;
    TBranch* b_lep4_eta;
    TBranch* b_lep4_phi;
    TBranch* b_jet4_p4;
    TBranch* b_jet4_pt;
    TBranch* b_jet4_eta;
    TBranch* b_jet4_phi;

    public:

        // TTree and TFile
        TTree* t;
        TFile* tfile;

        /* Initialize branch values */
        int year;

        int run;
        int lumi;
        int event;

        vector<float> jets_pt;
        vector<float> jets_eta;
        vector<float> jets_phi;
        vector<int> jets_id;
        vector<float> jets_btag;

        int lep1_id;
        int lep1_idlevel;
        bool lep1_iso;
        bool lep1_multiiso;
        float lep1_miniiso;
        float lep1_ptrel;
        float lep1_ptratio;
        bool lep1_isel;
        bool lep1_ismu;
        bool lep1_isneg;
        LorentzVector lep1_p4;
        float lep1_pt;
        float lep1_eta;
        float lep1_phi;
        LorentzVector jet1_p4;
        float jet1_pt;
        float jet1_eta;
        float jet1_phi;

        int lep2_id;
        int lep2_idlevel;
        bool lep2_iso;
        bool lep2_multiiso;
        float lep2_miniiso;
        float lep2_ptrel;
        float lep2_ptratio;
        bool lep2_isel;
        bool lep2_ismu;
        bool lep2_isneg;
        LorentzVector lep2_p4;
        float lep2_pt;
        float lep2_eta;
        float lep2_phi;
        LorentzVector jet2_p4;
        float jet2_pt;
        float jet2_eta;
        float jet2_phi;

        float pair_pt;
        bool pair_ss;
        int pair_hyp;

        int lep3_id;
        int lep3_idlevel;
        bool lep3_iso;
        bool lep3_multiiso;
        float lep3_miniiso;
        float lep3_ptrel;
        float lep3_ptratio;
        bool lep3_isel;
        bool lep3_ismu;
        bool lep3_isneg;
        LorentzVector lep3_p4;
        float lep3_pt;
        float lep3_eta;
        float lep3_phi;
        LorentzVector jet3_p4;
        float jet3_pt;
        float jet3_eta;
        float jet3_phi;

        int lep4_id;
        int lep4_idlevel;
        bool lep4_iso;
        bool lep4_multiiso;
        float lep4_miniiso;
        float lep4_ptrel;
        float lep4_ptratio;
        bool lep4_isel;
        bool lep4_ismu;
        bool lep4_isneg;
        LorentzVector lep4_p4;
        float lep4_pt;
        float lep4_eta;
        float lep4_phi;
        LorentzVector jet4_p4;
        float jet4_pt;
        float jet4_eta;
        float jet4_phi;


        /* Initialize other values */
        // -> Your values here <-

        /* Methods */
        // Constructor
        LeppairsTree(int year_int);
        // Reset variables
        void reset();
        // Fillers
        int fillBranches();
        // Other
        void fillTTree();
        void writeTFile();
        // -> Your methods here <-
};

#endif
    
