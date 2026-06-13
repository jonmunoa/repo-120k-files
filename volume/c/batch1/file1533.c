// fichero 1533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1533;

Registro1533 crear_registro1533(int id) {
    Registro1533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1533(Registro1533 r) {
    return r.valor + r.id;
}
