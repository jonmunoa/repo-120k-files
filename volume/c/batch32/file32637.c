// fichero 32637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32637;

Registro32637 crear_registro32637(int id) {
    Registro32637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32637(Registro32637 r) {
    return r.valor + r.id;
}
