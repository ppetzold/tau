#include "../libtml/tml.h"

int32_t main() {
	setlocale(LC_ALL, "");
	dlp p;
	clause *q;
	p.program_read(wcin), q = clause::clause_read(wcin);
	wcout<<p<<endl<<*q<<endl;
	p.pe(*q);
	wcout<<p<<endl<<*q<<endl;
}
