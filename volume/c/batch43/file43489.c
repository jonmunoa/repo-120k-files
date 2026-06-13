// fichero 43489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43489;

Registro43489 crear_registro43489(int id) {
    Registro43489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43489(Registro43489 r) {
    return r.valor + r.id;
}
