// fichero 30637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30637;

Registro30637 crear_registro30637(int id) {
    Registro30637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30637(Registro30637 r) {
    return r.valor + r.id;
}
