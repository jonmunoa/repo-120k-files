// fichero 39233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39233;

Registro39233 crear_registro39233(int id) {
    Registro39233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39233(Registro39233 r) {
    return r.valor + r.id;
}
