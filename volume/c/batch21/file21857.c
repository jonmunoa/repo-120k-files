// fichero 21857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21857;

Registro21857 crear_registro21857(int id) {
    Registro21857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21857(Registro21857 r) {
    return r.valor + r.id;
}
