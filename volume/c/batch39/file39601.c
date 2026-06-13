// fichero 39601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39601;

Registro39601 crear_registro39601(int id) {
    Registro39601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39601(Registro39601 r) {
    return r.valor + r.id;
}
