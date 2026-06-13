// fichero 39713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39713;

Registro39713 crear_registro39713(int id) {
    Registro39713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39713(Registro39713 r) {
    return r.valor + r.id;
}
