// fichero 32761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32761;

Registro32761 crear_registro32761(int id) {
    Registro32761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32761(Registro32761 r) {
    return r.valor + r.id;
}
