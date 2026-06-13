// fichero 145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro145;

Registro145 crear_registro145(int id) {
    Registro145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro145(Registro145 r) {
    return r.valor + r.id;
}
