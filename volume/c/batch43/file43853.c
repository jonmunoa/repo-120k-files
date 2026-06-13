// fichero 43853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43853;

Registro43853 crear_registro43853(int id) {
    Registro43853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43853(Registro43853 r) {
    return r.valor + r.id;
}
