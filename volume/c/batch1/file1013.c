// fichero 1013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1013;

Registro1013 crear_registro1013(int id) {
    Registro1013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1013(Registro1013 r) {
    return r.valor + r.id;
}
