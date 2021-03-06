/*
 * static_model.h
 *
 * automatically generated from substitution_example.icd
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_LD1;
extern LogicalNode   iedModel_LD1_LLN0;
extern DataObject    iedModel_LD1_LLN0_Beh;
extern DataAttribute iedModel_LD1_LLN0_Beh_stVal;
extern DataAttribute iedModel_LD1_LLN0_Beh_q;
extern DataAttribute iedModel_LD1_LLN0_Beh_t;
extern LogicalNode   iedModel_LD1_LPHD1;
extern DataObject    iedModel_LD1_LPHD1_PhyNam;
extern DataAttribute iedModel_LD1_LPHD1_PhyNam_vendor;
extern DataObject    iedModel_LD1_LPHD1_PhyHealth;
extern DataAttribute iedModel_LD1_LPHD1_PhyHealth_stVal;
extern DataAttribute iedModel_LD1_LPHD1_PhyHealth_q;
extern DataAttribute iedModel_LD1_LPHD1_PhyHealth_t;
extern DataObject    iedModel_LD1_LPHD1_Proxy;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_stVal;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_q;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_t;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_subEna;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_subVal;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_subQ;
extern DataAttribute iedModel_LD1_LPHD1_Proxy_subID;
extern LogicalNode   iedModel_LD1_MMDC1;
extern DataObject    iedModel_LD1_MMDC1_Beh;
extern DataAttribute iedModel_LD1_MMDC1_Beh_stVal;
extern DataAttribute iedModel_LD1_MMDC1_Beh_q;
extern DataAttribute iedModel_LD1_MMDC1_Beh_t;
extern DataObject    iedModel_LD1_MMDC1_Watt;
extern DataAttribute iedModel_LD1_MMDC1_Watt_mag;
extern DataAttribute iedModel_LD1_MMDC1_Watt_mag_f;
extern DataAttribute iedModel_LD1_MMDC1_Watt_q;
extern DataAttribute iedModel_LD1_MMDC1_Watt_t;
extern DataAttribute iedModel_LD1_MMDC1_Watt_subEna;
extern DataAttribute iedModel_LD1_MMDC1_Watt_subMag;
extern DataAttribute iedModel_LD1_MMDC1_Watt_subMag_f;
extern DataAttribute iedModel_LD1_MMDC1_Watt_subQ;
extern DataAttribute iedModel_LD1_MMDC1_Watt_subID;
extern DataObject    iedModel_LD1_MMDC1_Amp;
extern DataAttribute iedModel_LD1_MMDC1_Amp_mag;
extern DataAttribute iedModel_LD1_MMDC1_Amp_mag_f;
extern DataAttribute iedModel_LD1_MMDC1_Amp_q;
extern DataAttribute iedModel_LD1_MMDC1_Amp_t;
extern DataAttribute iedModel_LD1_MMDC1_Amp_subEna;
extern DataAttribute iedModel_LD1_MMDC1_Amp_subMag;
extern DataAttribute iedModel_LD1_MMDC1_Amp_subMag_f;
extern DataAttribute iedModel_LD1_MMDC1_Amp_subQ;
extern DataAttribute iedModel_LD1_MMDC1_Amp_subID;
extern DataObject    iedModel_LD1_MMDC1_Vol;
extern DataAttribute iedModel_LD1_MMDC1_Vol_mag;
extern DataAttribute iedModel_LD1_MMDC1_Vol_mag_f;
extern DataAttribute iedModel_LD1_MMDC1_Vol_q;
extern DataAttribute iedModel_LD1_MMDC1_Vol_t;
extern DataAttribute iedModel_LD1_MMDC1_Vol_subEna;
extern DataAttribute iedModel_LD1_MMDC1_Vol_subMag;
extern DataAttribute iedModel_LD1_MMDC1_Vol_subMag_f;
extern DataAttribute iedModel_LD1_MMDC1_Vol_subQ;
extern DataAttribute iedModel_LD1_MMDC1_Vol_subID;
extern LogicalNode   iedModel_LD1_GGIO1;
extern DataObject    iedModel_LD1_GGIO1_Beh;
extern DataAttribute iedModel_LD1_GGIO1_Beh_stVal;
extern DataAttribute iedModel_LD1_GGIO1_Beh_q;
extern DataAttribute iedModel_LD1_GGIO1_Beh_t;
extern DataObject    iedModel_LD1_GGIO1_Ind1;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_stVal;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_q;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_t;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_subEna;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_subVal;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_subQ;
extern DataAttribute iedModel_LD1_GGIO1_Ind1_subID;
extern DataObject    iedModel_LD1_GGIO1_AnIn1;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_mag;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_mag_f;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_q;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_t;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_subEna;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_subMag;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_subMag_f;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_subQ;
extern DataAttribute iedModel_LD1_GGIO1_AnIn1_subID;



#define IEDMODEL_LD1 (&iedModel_LD1)
#define IEDMODEL_LD1_LLN0 (&iedModel_LD1_LLN0)
#define IEDMODEL_LD1_LLN0_Beh (&iedModel_LD1_LLN0_Beh)
#define IEDMODEL_LD1_LLN0_Beh_stVal (&iedModel_LD1_LLN0_Beh_stVal)
#define IEDMODEL_LD1_LLN0_Beh_q (&iedModel_LD1_LLN0_Beh_q)
#define IEDMODEL_LD1_LLN0_Beh_t (&iedModel_LD1_LLN0_Beh_t)
#define IEDMODEL_LD1_LPHD1 (&iedModel_LD1_LPHD1)
#define IEDMODEL_LD1_LPHD1_PhyNam (&iedModel_LD1_LPHD1_PhyNam)
#define IEDMODEL_LD1_LPHD1_PhyNam_vendor (&iedModel_LD1_LPHD1_PhyNam_vendor)
#define IEDMODEL_LD1_LPHD1_PhyHealth (&iedModel_LD1_LPHD1_PhyHealth)
#define IEDMODEL_LD1_LPHD1_PhyHealth_stVal (&iedModel_LD1_LPHD1_PhyHealth_stVal)
#define IEDMODEL_LD1_LPHD1_PhyHealth_q (&iedModel_LD1_LPHD1_PhyHealth_q)
#define IEDMODEL_LD1_LPHD1_PhyHealth_t (&iedModel_LD1_LPHD1_PhyHealth_t)
#define IEDMODEL_LD1_LPHD1_Proxy (&iedModel_LD1_LPHD1_Proxy)
#define IEDMODEL_LD1_LPHD1_Proxy_stVal (&iedModel_LD1_LPHD1_Proxy_stVal)
#define IEDMODEL_LD1_LPHD1_Proxy_q (&iedModel_LD1_LPHD1_Proxy_q)
#define IEDMODEL_LD1_LPHD1_Proxy_t (&iedModel_LD1_LPHD1_Proxy_t)
#define IEDMODEL_LD1_LPHD1_Proxy_subEna (&iedModel_LD1_LPHD1_Proxy_subEna)
#define IEDMODEL_LD1_LPHD1_Proxy_subVal (&iedModel_LD1_LPHD1_Proxy_subVal)
#define IEDMODEL_LD1_LPHD1_Proxy_subQ (&iedModel_LD1_LPHD1_Proxy_subQ)
#define IEDMODEL_LD1_LPHD1_Proxy_subID (&iedModel_LD1_LPHD1_Proxy_subID)
#define IEDMODEL_LD1_MMDC1 (&iedModel_LD1_MMDC1)
#define IEDMODEL_LD1_MMDC1_Beh (&iedModel_LD1_MMDC1_Beh)
#define IEDMODEL_LD1_MMDC1_Beh_stVal (&iedModel_LD1_MMDC1_Beh_stVal)
#define IEDMODEL_LD1_MMDC1_Beh_q (&iedModel_LD1_MMDC1_Beh_q)
#define IEDMODEL_LD1_MMDC1_Beh_t (&iedModel_LD1_MMDC1_Beh_t)
#define IEDMODEL_LD1_MMDC1_Watt (&iedModel_LD1_MMDC1_Watt)
#define IEDMODEL_LD1_MMDC1_Watt_mag (&iedModel_LD1_MMDC1_Watt_mag)
#define IEDMODEL_LD1_MMDC1_Watt_mag_f (&iedModel_LD1_MMDC1_Watt_mag_f)
#define IEDMODEL_LD1_MMDC1_Watt_q (&iedModel_LD1_MMDC1_Watt_q)
#define IEDMODEL_LD1_MMDC1_Watt_t (&iedModel_LD1_MMDC1_Watt_t)
#define IEDMODEL_LD1_MMDC1_Watt_subEna (&iedModel_LD1_MMDC1_Watt_subEna)
#define IEDMODEL_LD1_MMDC1_Watt_subMag (&iedModel_LD1_MMDC1_Watt_subMag)
#define IEDMODEL_LD1_MMDC1_Watt_subMag_f (&iedModel_LD1_MMDC1_Watt_subMag_f)
#define IEDMODEL_LD1_MMDC1_Watt_subQ (&iedModel_LD1_MMDC1_Watt_subQ)
#define IEDMODEL_LD1_MMDC1_Watt_subID (&iedModel_LD1_MMDC1_Watt_subID)
#define IEDMODEL_LD1_MMDC1_Amp (&iedModel_LD1_MMDC1_Amp)
#define IEDMODEL_LD1_MMDC1_Amp_mag (&iedModel_LD1_MMDC1_Amp_mag)
#define IEDMODEL_LD1_MMDC1_Amp_mag_f (&iedModel_LD1_MMDC1_Amp_mag_f)
#define IEDMODEL_LD1_MMDC1_Amp_q (&iedModel_LD1_MMDC1_Amp_q)
#define IEDMODEL_LD1_MMDC1_Amp_t (&iedModel_LD1_MMDC1_Amp_t)
#define IEDMODEL_LD1_MMDC1_Amp_subEna (&iedModel_LD1_MMDC1_Amp_subEna)
#define IEDMODEL_LD1_MMDC1_Amp_subMag (&iedModel_LD1_MMDC1_Amp_subMag)
#define IEDMODEL_LD1_MMDC1_Amp_subMag_f (&iedModel_LD1_MMDC1_Amp_subMag_f)
#define IEDMODEL_LD1_MMDC1_Amp_subQ (&iedModel_LD1_MMDC1_Amp_subQ)
#define IEDMODEL_LD1_MMDC1_Amp_subID (&iedModel_LD1_MMDC1_Amp_subID)
#define IEDMODEL_LD1_MMDC1_Vol (&iedModel_LD1_MMDC1_Vol)
#define IEDMODEL_LD1_MMDC1_Vol_mag (&iedModel_LD1_MMDC1_Vol_mag)
#define IEDMODEL_LD1_MMDC1_Vol_mag_f (&iedModel_LD1_MMDC1_Vol_mag_f)
#define IEDMODEL_LD1_MMDC1_Vol_q (&iedModel_LD1_MMDC1_Vol_q)
#define IEDMODEL_LD1_MMDC1_Vol_t (&iedModel_LD1_MMDC1_Vol_t)
#define IEDMODEL_LD1_MMDC1_Vol_subEna (&iedModel_LD1_MMDC1_Vol_subEna)
#define IEDMODEL_LD1_MMDC1_Vol_subMag (&iedModel_LD1_MMDC1_Vol_subMag)
#define IEDMODEL_LD1_MMDC1_Vol_subMag_f (&iedModel_LD1_MMDC1_Vol_subMag_f)
#define IEDMODEL_LD1_MMDC1_Vol_subQ (&iedModel_LD1_MMDC1_Vol_subQ)
#define IEDMODEL_LD1_MMDC1_Vol_subID (&iedModel_LD1_MMDC1_Vol_subID)
#define IEDMODEL_LD1_GGIO1 (&iedModel_LD1_GGIO1)
#define IEDMODEL_LD1_GGIO1_Beh (&iedModel_LD1_GGIO1_Beh)
#define IEDMODEL_LD1_GGIO1_Beh_stVal (&iedModel_LD1_GGIO1_Beh_stVal)
#define IEDMODEL_LD1_GGIO1_Beh_q (&iedModel_LD1_GGIO1_Beh_q)
#define IEDMODEL_LD1_GGIO1_Beh_t (&iedModel_LD1_GGIO1_Beh_t)
#define IEDMODEL_LD1_GGIO1_Ind1 (&iedModel_LD1_GGIO1_Ind1)
#define IEDMODEL_LD1_GGIO1_Ind1_stVal (&iedModel_LD1_GGIO1_Ind1_stVal)
#define IEDMODEL_LD1_GGIO1_Ind1_q (&iedModel_LD1_GGIO1_Ind1_q)
#define IEDMODEL_LD1_GGIO1_Ind1_t (&iedModel_LD1_GGIO1_Ind1_t)
#define IEDMODEL_LD1_GGIO1_Ind1_subEna (&iedModel_LD1_GGIO1_Ind1_subEna)
#define IEDMODEL_LD1_GGIO1_Ind1_subVal (&iedModel_LD1_GGIO1_Ind1_subVal)
#define IEDMODEL_LD1_GGIO1_Ind1_subQ (&iedModel_LD1_GGIO1_Ind1_subQ)
#define IEDMODEL_LD1_GGIO1_Ind1_subID (&iedModel_LD1_GGIO1_Ind1_subID)
#define IEDMODEL_LD1_GGIO1_AnIn1 (&iedModel_LD1_GGIO1_AnIn1)
#define IEDMODEL_LD1_GGIO1_AnIn1_mag (&iedModel_LD1_GGIO1_AnIn1_mag)
#define IEDMODEL_LD1_GGIO1_AnIn1_mag_f (&iedModel_LD1_GGIO1_AnIn1_mag_f)
#define IEDMODEL_LD1_GGIO1_AnIn1_q (&iedModel_LD1_GGIO1_AnIn1_q)
#define IEDMODEL_LD1_GGIO1_AnIn1_t (&iedModel_LD1_GGIO1_AnIn1_t)
#define IEDMODEL_LD1_GGIO1_AnIn1_subEna (&iedModel_LD1_GGIO1_AnIn1_subEna)
#define IEDMODEL_LD1_GGIO1_AnIn1_subMag (&iedModel_LD1_GGIO1_AnIn1_subMag)
#define IEDMODEL_LD1_GGIO1_AnIn1_subMag_f (&iedModel_LD1_GGIO1_AnIn1_subMag_f)
#define IEDMODEL_LD1_GGIO1_AnIn1_subQ (&iedModel_LD1_GGIO1_AnIn1_subQ)
#define IEDMODEL_LD1_GGIO1_AnIn1_subID (&iedModel_LD1_GGIO1_AnIn1_subID)

#endif /* STATIC_MODEL_H_ */

