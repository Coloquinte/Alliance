void puts ();
void rps_print_man () {
	puts ("");
	puts ("");
	puts ("");
	puts ("L2P(1)              CAO-VLSI Reference Manual              L2P(1)");
	puts ("");
	puts ("");
	puts ("NNAAMMEE");
	puts ("       l2p    -  Creates a PostScript file from a symbolic layout");
	puts ("              file,or from a physical layout file.");
	puts ("");
	puts ("SSYYNNOOPPSSIISS");
	puts ("       ll22pp    [--ccoolloorr] [--ddrraawwiinnggssiizzee==<<ww>>xx<<hh>>]  [--ffAA33]  [--ffLLEETTTTEERR]");
	puts ("              [--ffLLEEGGAALL]  [--ggiivveebbwwddiicctt]  [--ggiivveeccoolloorrddiicctt]  [--hheellpp]");
	puts ("              [--nnoohheeaaddeerr]            [--ppaappeerrssiizzee==<<xx>>xx<<yy>>xx<<ww>>xx<<hh>>]");
	puts ("              [--ppaaggeess==<<xx>>xx<<yy>>]  [--ttssiizzee==<<ss>>]  [--nnrrnnaammee] [--nnccnnaammee]");
	puts ("              [--nnrrffnnaammee]  [--nniinnaammee]  [--nnssnnaammee]  [--mmffeeeedd]  [--rreeaall]");
	puts ("              [--rreessooll==<<xx>>]    [--rrffllaatttteennccaattaall]   [--rrffllaatttteennttrraannss]");
	puts ("              [--rroottaattee] [--ssccaallee==<<ff..ff>>] [--uusseeddiicctt==<<ff>>] _c_e_l_l_n_a_m_e");
	puts ("");
	puts ("DDEESSCCRRIIPPTTIIOONN");
	puts ("       Two main kind of cells can be used as inputs for l2p :");
	puts ("       First, you can use l2p to  print  symbolic  layout  cells.");
	puts ("       File formats can be .ap or .cp . This is given by an envi-");
	puts ("       ronment variable MMBBKK__IINN__PPHH that gives the appropriate sym-");
	puts ("       bolic layout file format.");
	puts ("       Second,  you  can use l2p to print real layout cells whose");
	puts ("       file formats can be .cif or .gds .  This is  given  by  an");
	puts ("       environment  variable  RRDDSS__IINN  that  gives the appropriate");
	puts ("       real layout file format.");
	puts ("       The path to the input file is set up  by  two  environment");
	puts ("       variables:    MMBBKK__WWOORRKK__LLIIBB(3)    and    if    not    found");
	puts ("       MMBBKK__CCAATTAA__LLIIBB(3).  The output of _l_2_p is a  PPoossttSSccrriipptt  file");
	puts ("       in  the  current directory. The drawing size and the paper");
	puts ("       size can be specified by the user. So, you can split  your");
	puts ("       drawing in as many pages as wanted. The resulting file can");
	puts ("       be then used on any adequat PPoossttccrriipptt printer.");
	puts ("       l2p will generate in the current directory, either a  sin-");
	puts ("       gle  file  called _<_c_e_l_l_n_a_m_e_>_._p_s, either several files suf-");
	puts ("       fixed by _-_<_x_>_x_<_y_>_._p_s, depending on wether you've asked for");
	puts ("       a  monopage plot or for a drawing that will be splitted on");
	puts ("       several pages.  If you do something  like  _l_2_p  _-_p_a_g_e_s_=_2_x_1");
	puts ("       _c_e_l_l,  it  will generate two files called _c_e_l_l_-_1_x_1_._p_s, and");
	puts ("       _c_e_l_l_-_2_x_1_._p_s.");
	puts ("");
	puts ("OOPPTTIIOONNSS");
	puts ("       With no options, l2p generate a 'standard file', with  all");
	puts ("       options off.  This is ok for leaf cells, but not for large");
	puts ("       circuits.");
	puts ("");
	puts ("       -color generates a color  PostScript  file  for  use  with");
	puts ("              color  interpreters.   The  default  value  gives a");
	puts ("              black and white PPoossttCCrriipptt file.");
	puts ("");
	puts ("       -drawingsize=<width>x<height>");
	puts ("              specifies the drawing area in centh  of  inch.   By");
	puts ("              default, wide = 725 and height = 1068 for french A4");
	puts ("              paper. If the drawing size is bigger than the paper");
	puts ("              area,  then the drawing will be splitted on several");
	puts ("              pages.");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("ASIM/LIP6                October 1, 1997                        1");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("L2P(1)              CAO-VLSI Reference Manual              L2P(1)");
	puts ("");
	puts ("");
	puts ("       -fA3   The drawing is done on A3 format paper.");
	puts ("");
	puts ("       -fLETTER");
	puts ("              The drawing is done on LETTER format paper.");
	puts ("");
	puts ("       -fLEGAL");
	puts ("              The drawing is done on LEGAL format paper.");
	puts ("");
	puts ("       -givebwdict");
	puts ("              give the Black & White internal PostScript diction-");
	puts ("              nary.  See below.");
	puts ("");
	puts ("       -givecolordict");
	puts ("              This  option  must be unique on the  command  line.");
	puts ("              When used  as  in   'l2p   -givebwdict',  l2p  then");
	puts ("              gives  on  the  standard  output  its Black & White");
	puts ("              internal   Postscript  dictionnary.   A  PostScript");
	puts ("              dictionnary  is a set of mac- ros that will be used");
	puts ("              during  interpretation  of  your  PostScript  file.");
	puts ("              The macros in the internal PostScript dictionnaries");
	puts ("              of l2p allows you to control which  layer to   out-");
	puts ("              put,   how   to   plot  rectangles, and specify the");
	puts ("              colors of the rectangles. You get the standard dic-");
	puts ("              tion- nary  by  a  line  of  the  form  'l2p -give-");
	puts ("              colordict > dict.ps'. You  can  then  edit  it,  in");
	puts ("              order  to  reuse  it  with  l2p, see the '-usedict'");
	puts ("              option below.");
	puts ("");
	puts ("       -help  gives you this man page that explains  how  to  use");
	puts ("              l2p.");
	puts ("");
	puts ("       -noheader");
	puts ("              prevents  the border and various info, as the cell-");
	puts ("              name and the position of the page in  the  drawing,");
	puts ("              from being printed.");
	puts ("");
	puts ("       -papersize=<x_low_left>x<y_low_left>x<width>x<height>");
	puts ("              specifies  the  paper  area  in  centh  of inch. By");
	puts ("              default, 50x50x726x1069 for a4 paper.");
	puts ("");
	puts ("       -pages=<number_of_x_pages>x<number_of_y_pages>");
	puts ("              specifies the drawing area in pages. It can be use-");
	puts ("              ful,  instead  of  having  to calculate the size in");
	puts ("              cenths of inch of the drawing, to give it  in  num-");
	puts ("              bers of pages. It takes care of the resizing of the");
	puts ("              paper and whether there is a header.");
	puts ("");
	puts ("       -tsize=<s>");
	puts ("              Available sizes:6,8,10,12,14.The default  value  is");
	puts ("              8.");
	puts ("");
	puts ("       -nrname");
	puts ("              No name at all will be displayed.");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("ASIM/LIP6                October 1, 1997                        2");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("L2P(1)              CAO-VLSI Reference Manual              L2P(1)");
	puts ("");
	puts ("");
	puts ("       -ncname");
	puts ("              The  external connector's names won't be displayed.");
	puts ("");
	puts ("       -nrfname");
	puts ("              The references's names won't be displayed.");
	puts ("");
	puts ("       -niname");
	puts ("              The instances's names won't be displayed.");
	puts ("");
	puts ("       -nsname");
	puts ("              The segments's names won't be displayed.");
	puts ("");
	puts ("       -mfeed Manualfeed:if set,informs the printer that it  will");
	puts ("              be fed by the user himself,for each printing .");
	puts ("");
	puts ("       -real  uses  real  file  (cif, gds). By default, uses sym-");
	puts ("              bolic layout file (ap, cp).");
	puts ("");
	puts ("       -resol=<x>");
	puts ("              is the resolution of the  file  in  dots  per  inch");
	puts ("              (dpi).  This value has been introducted to limitate");
	puts ("              the size of the generated  PostScript  files.  Each");
	puts ("              rectangle  whose  width and height are smaller than");
	puts ("              the resolution will not  be  printed.  The  default");
	puts ("              value  is  72dpi.  It should only be changed in one");
	puts ("              specifical case : when you want to produce  a  plot");
	puts ("              of several meter large. Usually, you must provide a");
	puts ("              PostScript file sized for A4 paper with a much bet-");
	puts ("              ter  resolution  than  72dpi. You can then increase");
	puts ("              that value to up to 1000dpi, but be aware that  the");
	puts ("              size  of  the  file  will probably be bigger than a");
	puts ("              44Mb SyQuest cartridge that  is  used  in  PAO  for");
	puts ("              exchanging data files.");
	puts ("");
	puts ("       -rflattencatal");
	puts ("              flattens   the  cell  to  the  catalog  level.  see");
	puts ("              catal(5) for more details on the use of the catalog");
	puts ("              file.  Be  careful,  this  option requires a lot of");
	puts ("              memory...");
	puts ("");
	puts ("       -rflattentrans");
	puts ("              flattens the cell to the  transistor  level  before");
	puts ("              printing.  Be  careful,  this option requires a lot");
	puts ("              more memory...");
	puts ("");
	puts ("       -rotate");
	puts ("              rotate the cell from 90 degree. This is  useful  if");
	puts ("              you  have  a  wide  cell,  and  you want to have it");
	puts ("              printed in landscape mode.");
	puts ("");
	puts ("       -scale=<f.f>");
	puts ("              forces the cell to be printed with a certain  scale");
	puts ("              (a  floating-point  number).   This is very useful,");
	puts ("              when you are printing a whole library of cells, and");
	puts ("");
	puts ("");
	puts ("");
	puts ("ASIM/LIP6                October 1, 1997                        3");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("L2P(1)              CAO-VLSI Reference Manual              L2P(1)");
	puts ("");
	puts ("");
	puts ("              you want all cells to be printed to the same scale.");
	puts ("              You can find at which scale a cell was  printed  by");
	puts ("              looking  at  the  beginning  of  the  file  : 'head");
	puts ("              n1_y-1x1.ps' will show  you  a  PostScript  comment");
	puts ("              beginning by '%SCALE=3.78435' for example.");
	puts ("");
	puts ("       -usedict=<filename>");
	puts ("              The output Postcript file contains a Postcript dic-");
	puts ("              tionnary of macros.");
	puts ("              There are two standard dictionnaries  used  by  l2p");
	puts ("              for  black  and white or color prints.  This allows");
	puts ("              you to use a PostScript dictionnary different  from");
	puts ("              the  two  internally encoded into l2p. By modifying");
	puts ("              one of the standard l2p dictionnary, you can choose");
	puts ("              which  layer  to output, how to fill the rectangles");
	puts ("              (empty, hashed, filled), which color to choose, ...");
	puts ("              and  lots  of  other possibilities. The rest of the");
	puts ("              generated postscript file is mainly orders of draw-");
	puts ("              ing  rectangles.  PostScript  is  a  reverse polish");
	puts ("              notation langage, that is easy to read  for  simple");
	puts ("              programs.");
	puts ("              If you use this functionnality, and think that your");
	puts ("              dictionnaries are worth it,  please  mail  them  to");
	puts ("              alliance-support@asim.lip6.fr,  in  order to submit");
	puts ("              them  for  inclusion  in  future  version  of   l2p");
	puts ("              (Thanks).");
	puts ("");
	puts ("");
	puts ("EENNVVIIRROONNMMEENNTT VVAARRIIAABBLLEESS::");
	puts ("       for symbolic file(s) :");
	puts ("              sseetteennvv MMBBKK__IINN__PPHH aapp");
	puts ("              sseetteennvv MMBBKK__WWOORRKK__LLIIBB ..");
	puts ("              sseetteennvv MMBBKK__CCAATTAA__LLIIBB //llaabboo//cceellllss//ssccrr");
	puts ("              sseetteennvv MMBBKK__CCAATTAALL__NNAAMMEE CCAATTAALL");
	puts ("              sseetteennvv RRDDSS__TTEECCHHNNOO__NNAAMMEE ccmmooss__11..rrddss");
	puts ("");
	puts ("       for real file(s) :");
	puts ("              sseetteennvv RRDDSS__IINN cciiff");
	puts ("              sseetteennvv MMBBKK__CCAATTAALL__NNAAMMEE CCAATTAALL__RROOUUTT");
	puts ("              sseetteennvv RRDDSS__TTEECCHHNNOO__NNAAMMEE pprrooll1122__11..rrddss");
	puts ("");
	puts ("");
	puts ("EEXXAAMMPPLLEESS::");
	puts ("       _l_2_p _-_c_o_l_o_r _n_1___y");
	puts ("              will  create  a colored nn11__yy..ppss file in the current");
	puts ("              directory : the 'standard' way.");
	puts ("");
	puts ("       _l_2_p _-_r_e_a_l _c_e_l_l");
	puts ("              will create a cceellll..ppss file in the current directory");
	puts ("              from  cell.cif or cell.gds, depending on the RDS_IN");
	puts ("              environment variable.");
	puts ("");
	puts ("       _l_2_p _-_p_a_g_e_s_=_3_x_2 _n_a_2___y");
	puts ("              size of the created  drawing:3  horizontal  pages,2");
	puts ("");
	puts ("");
	puts ("");
	puts ("ASIM/LIP6                October 1, 1997                        4");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("L2P(1)              CAO-VLSI Reference Manual              L2P(1)");
	puts ("");
	puts ("");
	puts ("              vertical ones;");
	puts ("");
	puts ("");
	puts ("");
	puts ("       SSEEEE AALLSSOO");
	puts ("              mmbbkk((11)),,   rrddss((11)),,   MMBBKK__IINN__PPHH((33)),,  MMBBKK__CCAATTAA__LLIIBB((33)),,");
	puts ("              MMBBKK__WWOORRKK__LLIIBB((33)),,                 MMBBKK__CCAATTAALL__NNAAMMEE((33)),,");
	puts ("              RRDDSS__TTEECCHHNNOO__NNAAMMEE((33)),,       ppaaggeevviieeww((11)),,       ggss((11)),,");
	puts ("              gghhoossttvviieeww((11)),, llpprr((11))..");
	puts ("");
	puts ("");
	puts ("DDIIAAGGNNOOSSTTIICCSS");
	puts ("       You will not be able to generate more than  approximativly");
	puts ("       30  pages  at  the  same time (because of the FOPEN_MAX of");
	puts ("       your environment). In this case, see the  option  that  is");
	puts ("       not implemented yet.");
	puts ("       The  generated  PPoossttSSccrriipptt  is  Level  1  for black& white");
	puts ("       plots.  When you use color,  it  generates  Level  1  with");
	puts ("       color  extensions.   It  may  not  run with strict Level 1");
	puts ("       interpreters, although it runs here with our Apple Person-");
	puts ("       nal  LaserWriter, Sun Sparcprinters, and Canon CLC-300-PS.");
	puts ("       It follows the Adobe Document Structuring  Conventions  1,");
	puts ("       and  as there is a fake bitmap image inside each generated");
	puts ("       files, you can re-use them  in  your  word-processors,  or");
	puts ("       publishing  software,  because  the PostScript is EPSF-1.2");
	puts ("       compliant.");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("");
	puts ("ASIM/LIP6                October 1, 1997                        5");
	puts ("");
	puts ("");
}
