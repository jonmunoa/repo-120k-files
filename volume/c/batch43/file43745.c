// fichero 43745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43745;

Registro43745 crear_registro43745(int id) {
    Registro43745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43745(Registro43745 r) {
    return r.valor + r.id;
}
