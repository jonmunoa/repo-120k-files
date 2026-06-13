// fichero 3273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3273;

Registro3273 crear_registro3273(int id) {
    Registro3273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3273(Registro3273 r) {
    return r.valor + r.id;
}
