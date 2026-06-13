// fichero 6013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6013;

Registro6013 crear_registro6013(int id) {
    Registro6013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6013(Registro6013 r) {
    return r.valor + r.id;
}
