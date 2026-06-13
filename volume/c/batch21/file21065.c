// fichero 21065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21065;

Registro21065 crear_registro21065(int id) {
    Registro21065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21065(Registro21065 r) {
    return r.valor + r.id;
}
