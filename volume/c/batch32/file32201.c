// fichero 32201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32201;

Registro32201 crear_registro32201(int id) {
    Registro32201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32201(Registro32201 r) {
    return r.valor + r.id;
}
