// fichero 26113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26113;

Registro26113 crear_registro26113(int id) {
    Registro26113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26113(Registro26113 r) {
    return r.valor + r.id;
}
