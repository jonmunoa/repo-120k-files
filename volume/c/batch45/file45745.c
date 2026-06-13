// fichero 45745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45745;

Registro45745 crear_registro45745(int id) {
    Registro45745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45745(Registro45745 r) {
    return r.valor + r.id;
}
