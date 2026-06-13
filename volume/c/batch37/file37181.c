// fichero 37181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37181;

Registro37181 crear_registro37181(int id) {
    Registro37181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37181(Registro37181 r) {
    return r.valor + r.id;
}
