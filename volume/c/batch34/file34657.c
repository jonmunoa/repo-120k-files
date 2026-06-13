// fichero 34657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34657;

Registro34657 crear_registro34657(int id) {
    Registro34657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34657(Registro34657 r) {
    return r.valor + r.id;
}
