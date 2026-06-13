// fichero 37209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37209;

Registro37209 crear_registro37209(int id) {
    Registro37209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37209(Registro37209 r) {
    return r.valor + r.id;
}
