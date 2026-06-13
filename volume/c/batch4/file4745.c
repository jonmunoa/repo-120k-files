// fichero 4745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4745;

Registro4745 crear_registro4745(int id) {
    Registro4745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4745(Registro4745 r) {
    return r.valor + r.id;
}
