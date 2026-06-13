// fichero 23921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23921;

Registro23921 crear_registro23921(int id) {
    Registro23921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23921(Registro23921 r) {
    return r.valor + r.id;
}
