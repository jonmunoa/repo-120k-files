// fichero 1 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1;

Registro1 crear_registro1(int id) {
    Registro1 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1(Registro1 r) {
    return r.valor + r.id;
}
