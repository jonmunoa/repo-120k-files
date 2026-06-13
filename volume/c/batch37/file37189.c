// fichero 37189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37189;

Registro37189 crear_registro37189(int id) {
    Registro37189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37189(Registro37189 r) {
    return r.valor + r.id;
}
