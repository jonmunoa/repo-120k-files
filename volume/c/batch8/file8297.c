// fichero 8297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8297;

Registro8297 crear_registro8297(int id) {
    Registro8297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8297(Registro8297 r) {
    return r.valor + r.id;
}
