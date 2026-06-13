// fichero 26689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26689;

Registro26689 crear_registro26689(int id) {
    Registro26689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26689(Registro26689 r) {
    return r.valor + r.id;
}
