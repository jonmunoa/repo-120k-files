// fichero 1601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1601;

Registro1601 crear_registro1601(int id) {
    Registro1601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1601(Registro1601 r) {
    return r.valor + r.id;
}
