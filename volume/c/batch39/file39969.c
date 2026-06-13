// fichero 39969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39969;

Registro39969 crear_registro39969(int id) {
    Registro39969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39969(Registro39969 r) {
    return r.valor + r.id;
}
