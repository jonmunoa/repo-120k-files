// fichero 6705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6705;

Registro6705 crear_registro6705(int id) {
    Registro6705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6705(Registro6705 r) {
    return r.valor + r.id;
}
