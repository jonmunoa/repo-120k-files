// fichero 301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro301;

Registro301 crear_registro301(int id) {
    Registro301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro301(Registro301 r) {
    return r.valor + r.id;
}
