// fichero 39557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39557;

Registro39557 crear_registro39557(int id) {
    Registro39557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39557(Registro39557 r) {
    return r.valor + r.id;
}
