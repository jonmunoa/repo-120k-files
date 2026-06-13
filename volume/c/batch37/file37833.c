// fichero 37833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37833;

Registro37833 crear_registro37833(int id) {
    Registro37833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37833(Registro37833 r) {
    return r.valor + r.id;
}
