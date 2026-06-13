// fichero 37237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37237;

Registro37237 crear_registro37237(int id) {
    Registro37237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37237(Registro37237 r) {
    return r.valor + r.id;
}
