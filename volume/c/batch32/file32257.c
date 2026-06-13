// fichero 32257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32257;

Registro32257 crear_registro32257(int id) {
    Registro32257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32257(Registro32257 r) {
    return r.valor + r.id;
}
