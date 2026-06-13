// fichero 23417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23417;

Registro23417 crear_registro23417(int id) {
    Registro23417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23417(Registro23417 r) {
    return r.valor + r.id;
}
