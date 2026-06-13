// fichero 52129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52129;

Registro52129 crear_registro52129(int id) {
    Registro52129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52129(Registro52129 r) {
    return r.valor + r.id;
}
