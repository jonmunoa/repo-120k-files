// fichero 16105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16105;

Registro16105 crear_registro16105(int id) {
    Registro16105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16105(Registro16105 r) {
    return r.valor + r.id;
}
