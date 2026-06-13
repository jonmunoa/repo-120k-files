// fichero 1285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1285;

Registro1285 crear_registro1285(int id) {
    Registro1285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1285(Registro1285 r) {
    return r.valor + r.id;
}
