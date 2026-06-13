// fichero 37969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37969;

Registro37969 crear_registro37969(int id) {
    Registro37969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37969(Registro37969 r) {
    return r.valor + r.id;
}
