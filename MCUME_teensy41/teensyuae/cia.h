 /* 
  * UAE - The Un*x Amiga Emulator
  * 
  * CIA chip support
  *
  * (c) 1995 Bernd Schmidt
  */

extern void CIA_reset(void);
extern void CIA_vsync_handler(void);
extern void CIA_hsync_handler(void);
extern void CIA_handler(void);
extern void CIA_shakehands_set(uae_u8 mask);
extern void CIA_shakehands_clear(uae_u8 mask);

extern uae_u8 CIA_shakehands_get (void);

extern void diskindex_handler(void);

extern void dumpcia(void);

extern unsigned int ciaaicr,ciaaimask,ciabicr,ciabimask;
extern unsigned int ciaacra,ciaacrb,ciabcra,ciabcrb;
extern unsigned long ciaata,ciaatb,ciabta,ciabtb;
extern unsigned long ciaatod,ciabtod,ciaatol,ciabtol,ciaaalarm,ciabalarm;
extern int ciaatlatch,ciabtlatch;

