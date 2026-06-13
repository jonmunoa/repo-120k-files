// fichero 45841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45841;

Registro45841 crear_registro45841(int id) {
    Registro45841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45841(Registro45841 r) {
    return r.valor + r.id;
}
