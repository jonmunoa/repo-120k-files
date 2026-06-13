// fichero 52281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52281;

Registro52281 crear_registro52281(int id) {
    Registro52281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52281(Registro52281 r) {
    return r.valor + r.id;
}
