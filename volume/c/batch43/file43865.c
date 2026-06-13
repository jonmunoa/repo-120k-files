// fichero 43865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43865;

Registro43865 crear_registro43865(int id) {
    Registro43865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43865(Registro43865 r) {
    return r.valor + r.id;
}
