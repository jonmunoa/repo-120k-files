// fichero 45921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45921;

Registro45921 crear_registro45921(int id) {
    Registro45921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45921(Registro45921 r) {
    return r.valor + r.id;
}
