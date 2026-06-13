// fichero 23269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23269;

Registro23269 crear_registro23269(int id) {
    Registro23269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23269(Registro23269 r) {
    return r.valor + r.id;
}
