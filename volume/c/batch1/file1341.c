// fichero 1341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1341;

Registro1341 crear_registro1341(int id) {
    Registro1341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1341(Registro1341 r) {
    return r.valor + r.id;
}
