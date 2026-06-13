// fichero 32425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32425;

Registro32425 crear_registro32425(int id) {
    Registro32425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32425(Registro32425 r) {
    return r.valor + r.id;
}
