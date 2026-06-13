// fichero 17637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17637;

Registro17637 crear_registro17637(int id) {
    Registro17637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17637(Registro17637 r) {
    return r.valor + r.id;
}
