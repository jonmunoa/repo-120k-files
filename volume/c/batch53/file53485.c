// fichero 53485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53485;

Registro53485 crear_registro53485(int id) {
    Registro53485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53485(Registro53485 r) {
    return r.valor + r.id;
}
