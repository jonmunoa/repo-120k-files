// fichero 6833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6833;

Registro6833 crear_registro6833(int id) {
    Registro6833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6833(Registro6833 r) {
    return r.valor + r.id;
}
