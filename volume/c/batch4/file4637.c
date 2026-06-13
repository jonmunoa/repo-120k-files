// fichero 4637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4637;

Registro4637 crear_registro4637(int id) {
    Registro4637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4637(Registro4637 r) {
    return r.valor + r.id;
}
