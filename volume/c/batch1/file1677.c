// fichero 1677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1677;

Registro1677 crear_registro1677(int id) {
    Registro1677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1677(Registro1677 r) {
    return r.valor + r.id;
}
