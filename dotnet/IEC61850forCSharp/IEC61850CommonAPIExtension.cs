using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using System.Runtime.InteropServices;

namespace IEC61850
{
    namespace Common
    {
        public enum DbPos
        {
            Intermediate,
            Off,
            On,
            Error
        }

        public enum PresenceCondition
        {
            //[Description("Член является обязательным (mandatory)")]
            M,
            //[Description("Член является необязательным (optional)")]
            O,
            Omulti,
            //[Description("Член является элементом группы, и наличие хотя бы одного члена из группы является обязательным")]
            AtLeastOne,
            //[Description("Член является элементом группы, и обязательным является наличие не более чем одного члена из группы")]
            AtMostOne,
            //[Description("Член является элементом группы, и обязательным яявляется либо одновременное наличие всех членов, либо их одновременное отсутствие")]
            AllOrNonePerGroup,
            AllOnlyOneGroup,
            MO,
            MF,
            OF,
            OmultiRange,
            MFsubst,
            MOln0,
            MFln0,
            MOlnNs,
            MOcdcNs,
            MOdataNs,
            MFscaledAV,
            MFscaledMagV,
            MFscaledAngV,
            MOrms,
            MOoperTm
        }
    }
}
