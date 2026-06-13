// fichero 16721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16721;

Registro16721 crear_registro16721(int id) {
    Registro16721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16721(Registro16721 r) {
    return r.valor + r.id;
}
