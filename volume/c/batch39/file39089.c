// fichero 39089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39089;

Registro39089 crear_registro39089(int id) {
    Registro39089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39089(Registro39089 r) {
    return r.valor + r.id;
}
