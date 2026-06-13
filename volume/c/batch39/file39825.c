// fichero 39825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39825;

Registro39825 crear_registro39825(int id) {
    Registro39825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39825(Registro39825 r) {
    return r.valor + r.id;
}
