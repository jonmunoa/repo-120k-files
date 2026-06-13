// fichero 39361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39361;

Registro39361 crear_registro39361(int id) {
    Registro39361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39361(Registro39361 r) {
    return r.valor + r.id;
}
