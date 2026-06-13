// fichero 39765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39765;

Registro39765 crear_registro39765(int id) {
    Registro39765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39765(Registro39765 r) {
    return r.valor + r.id;
}
