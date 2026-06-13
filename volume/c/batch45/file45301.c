// fichero 45301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45301;

Registro45301 crear_registro45301(int id) {
    Registro45301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45301(Registro45301 r) {
    return r.valor + r.id;
}
