// fichero 23137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23137;

Registro23137 crear_registro23137(int id) {
    Registro23137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23137(Registro23137 r) {
    return r.valor + r.id;
}
