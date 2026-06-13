// fichero 33513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33513;

Registro33513 crear_registro33513(int id) {
    Registro33513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33513(Registro33513 r) {
    return r.valor + r.id;
}
