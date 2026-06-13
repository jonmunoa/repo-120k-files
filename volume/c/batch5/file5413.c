// fichero 5413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5413;

Registro5413 crear_registro5413(int id) {
    Registro5413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5413(Registro5413 r) {
    return r.valor + r.id;
}
