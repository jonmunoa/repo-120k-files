// fichero 39377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39377;

Registro39377 crear_registro39377(int id) {
    Registro39377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39377(Registro39377 r) {
    return r.valor + r.id;
}
