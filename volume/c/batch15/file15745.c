// fichero 15745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15745;

Registro15745 crear_registro15745(int id) {
    Registro15745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15745(Registro15745 r) {
    return r.valor + r.id;
}
