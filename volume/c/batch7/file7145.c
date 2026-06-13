// fichero 7145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7145;

Registro7145 crear_registro7145(int id) {
    Registro7145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7145(Registro7145 r) {
    return r.valor + r.id;
}
