// fichero 2073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2073;

Registro2073 crear_registro2073(int id) {
    Registro2073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2073(Registro2073 r) {
    return r.valor + r.id;
}
