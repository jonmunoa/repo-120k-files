// fichero 20601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20601;

Registro20601 crear_registro20601(int id) {
    Registro20601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20601(Registro20601 r) {
    return r.valor + r.id;
}
