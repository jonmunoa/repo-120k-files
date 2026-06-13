// fichero 37233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37233;

Registro37233 crear_registro37233(int id) {
    Registro37233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37233(Registro37233 r) {
    return r.valor + r.id;
}
