// fichero 2937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2937;

Registro2937 crear_registro2937(int id) {
    Registro2937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2937(Registro2937 r) {
    return r.valor + r.id;
}
