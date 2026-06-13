// fichero 3413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3413;

Registro3413 crear_registro3413(int id) {
    Registro3413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3413(Registro3413 r) {
    return r.valor + r.id;
}
