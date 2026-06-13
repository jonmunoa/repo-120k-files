// fichero 38517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38517;

Registro38517 crear_registro38517(int id) {
    Registro38517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38517(Registro38517 r) {
    return r.valor + r.id;
}
