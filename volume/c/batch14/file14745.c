// fichero 14745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14745;

Registro14745 crear_registro14745(int id) {
    Registro14745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14745(Registro14745 r) {
    return r.valor + r.id;
}
