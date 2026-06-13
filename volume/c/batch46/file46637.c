// fichero 46637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46637;

Registro46637 crear_registro46637(int id) {
    Registro46637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46637(Registro46637 r) {
    return r.valor + r.id;
}
