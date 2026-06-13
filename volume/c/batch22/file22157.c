// fichero 22157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22157;

Registro22157 crear_registro22157(int id) {
    Registro22157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22157(Registro22157 r) {
    return r.valor + r.id;
}
