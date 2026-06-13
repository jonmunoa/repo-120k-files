// fichero 49145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49145;

Registro49145 crear_registro49145(int id) {
    Registro49145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49145(Registro49145 r) {
    return r.valor + r.id;
}
