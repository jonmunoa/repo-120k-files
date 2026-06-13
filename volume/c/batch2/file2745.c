// fichero 2745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2745;

Registro2745 crear_registro2745(int id) {
    Registro2745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2745(Registro2745 r) {
    return r.valor + r.id;
}
