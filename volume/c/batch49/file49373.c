// fichero 49373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49373;

Registro49373 crear_registro49373(int id) {
    Registro49373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49373(Registro49373 r) {
    return r.valor + r.id;
}
