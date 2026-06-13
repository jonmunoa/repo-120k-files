// fichero 41637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41637;

Registro41637 crear_registro41637(int id) {
    Registro41637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41637(Registro41637 r) {
    return r.valor + r.id;
}
