// fichero 37377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37377;

Registro37377 crear_registro37377(int id) {
    Registro37377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37377(Registro37377 r) {
    return r.valor + r.id;
}
