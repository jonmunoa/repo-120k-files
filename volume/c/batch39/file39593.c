// fichero 39593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39593;

Registro39593 crear_registro39593(int id) {
    Registro39593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39593(Registro39593 r) {
    return r.valor + r.id;
}
