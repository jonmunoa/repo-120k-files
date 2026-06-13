// fichero 13489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13489;

Registro13489 crear_registro13489(int id) {
    Registro13489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13489(Registro13489 r) {
    return r.valor + r.id;
}
