// fichero 39573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39573;

Registro39573 crear_registro39573(int id) {
    Registro39573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39573(Registro39573 r) {
    return r.valor + r.id;
}
