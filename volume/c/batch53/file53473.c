// fichero 53473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53473;

Registro53473 crear_registro53473(int id) {
    Registro53473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53473(Registro53473 r) {
    return r.valor + r.id;
}
