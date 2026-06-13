// fichero 26601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26601;

Registro26601 crear_registro26601(int id) {
    Registro26601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26601(Registro26601 r) {
    return r.valor + r.id;
}
