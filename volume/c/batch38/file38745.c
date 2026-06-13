// fichero 38745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38745;

Registro38745 crear_registro38745(int id) {
    Registro38745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38745(Registro38745 r) {
    return r.valor + r.id;
}
