      real*8 function fpi0_Erec(x,z)
c     E: incoming neutrino energy in GeV
      implicit none
      include 'inc/const.inc'
      real*8 x,z(200)
      integer int_mode,nutype,icol
      real*8 E,Ev
      real*8 pi0_Erec_ae,pi0_Erec_am,pi0_Erec_ne,pi0_Erec_nm
      external pi0_Erec_ae,pi0_Erec_am,pi0_Erec_ne,pi0_Erec_nm

      fpi0_Erec = 0d0
      nutype = int(z(1)) ! incoming neutrino type
      Ev = z(2)*1d3 ! incoming nu energy in MeV
      icol = int(z(3)) +1
      E = x ! reconstructed nu energy in GeV
      
      if (nutype.gt.0) then
         fpi0_Erec = pi0_Erec_nm(icol,Ev,E)
      elseif (nutype.lt.0) then
         fpi0_Erec = pi0_Erec_am(icol,Ev,E)
      endif

      return
      end


      real*8 function pi0_Erec_nm(icol,Ev,Erec)
c     Erec: Reconstructed neutrino energy [MeV]
c     Ev: incoming neutrino energy [MeV]
      implicit none
      integer oi
      include 'include_pi0_Erecincs_nm1100.inc'
      real*8 Ev,Erec
      character*5 cEv4
      integer i
      integer nrow,ncol,icol,inum,iEv
      real*8 binw,Evmin,dEv,iEvmax,f,res
      real*8 f1,f2
      real*8 read_histo
      external read_histo
      nrow = 120
c      ncol = 6
      ncol = 2
c      binw = 0.05d0
      binw = 1d0
      include 'inc/read_pi0_Erecinc_nm1100.inc'
      pi0_Erec_nm = f
      return
      end


      real*8 function pi0_Erec_am(icol,Ev,Erec)
c     Erec: Reconstructed neutrino energy [MeV]
c     Ev: incoming neutrino energy [MeV]
      implicit none
      integer oi
      include 'include_pi0_Erecincs_am1100.inc'
      real*8 Ev,Erec
      character*5 cEv4
      integer i
      integer nrow,ncol,icol,inum,iEv
      real*8 binw,Evmin,dEv,iEvmax,f,res
      real*8 f1,f2
      real*8 read_histo
      external read_histo      
      nrow = 120
c      ncol = 6
      ncol = 2
c      binw = 0.05d0
      binw = 1d0
      include 'inc/read_pi0_Erecinc_am1100.inc'
      pi0_Erec_am = f
      return
      end
