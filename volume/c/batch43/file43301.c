// fichero 43301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43301;

Registro43301 crear_registro43301(int id) {
    Registro43301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43301(Registro43301 r) {
    return r.valor + r.id;
}
