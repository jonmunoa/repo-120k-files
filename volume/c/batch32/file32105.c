// fichero 32105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32105;

Registro32105 crear_registro32105(int id) {
    Registro32105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32105(Registro32105 r) {
    return r.valor + r.id;
}
