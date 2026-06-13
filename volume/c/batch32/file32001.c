// fichero 32001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32001;

Registro32001 crear_registro32001(int id) {
    Registro32001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32001(Registro32001 r) {
    return r.valor + r.id;
}
