// fichero 39957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39957;

Registro39957 crear_registro39957(int id) {
    Registro39957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39957(Registro39957 r) {
    return r.valor + r.id;
}
