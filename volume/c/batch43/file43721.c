// fichero 43721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43721;

Registro43721 crear_registro43721(int id) {
    Registro43721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43721(Registro43721 r) {
    return r.valor + r.id;
}
