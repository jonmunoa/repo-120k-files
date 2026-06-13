// fichero 39805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39805;

Registro39805 crear_registro39805(int id) {
    Registro39805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39805(Registro39805 r) {
    return r.valor + r.id;
}
