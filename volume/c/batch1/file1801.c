// fichero 1801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1801;

Registro1801 crear_registro1801(int id) {
    Registro1801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1801(Registro1801 r) {
    return r.valor + r.id;
}
