// fichero 1365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1365;

Registro1365 crear_registro1365(int id) {
    Registro1365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1365(Registro1365 r) {
    return r.valor + r.id;
}
