// fichero 52473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52473;

Registro52473 crear_registro52473(int id) {
    Registro52473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52473(Registro52473 r) {
    return r.valor + r.id;
}
