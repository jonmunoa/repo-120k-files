// fichero 39613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39613;

Registro39613 crear_registro39613(int id) {
    Registro39613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39613(Registro39613 r) {
    return r.valor + r.id;
}
