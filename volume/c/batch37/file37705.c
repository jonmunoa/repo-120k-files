// fichero 37705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37705;

Registro37705 crear_registro37705(int id) {
    Registro37705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37705(Registro37705 r) {
    return r.valor + r.id;
}
