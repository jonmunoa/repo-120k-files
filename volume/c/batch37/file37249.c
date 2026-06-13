// fichero 37249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37249;

Registro37249 crear_registro37249(int id) {
    Registro37249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37249(Registro37249 r) {
    return r.valor + r.id;
}
