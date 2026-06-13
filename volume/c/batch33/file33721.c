// fichero 33721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33721;

Registro33721 crear_registro33721(int id) {
    Registro33721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33721(Registro33721 r) {
    return r.valor + r.id;
}
