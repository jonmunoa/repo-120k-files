// fichero 6321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6321;

Registro6321 crear_registro6321(int id) {
    Registro6321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6321(Registro6321 r) {
    return r.valor + r.id;
}
