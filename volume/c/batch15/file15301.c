// fichero 15301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15301;

Registro15301 crear_registro15301(int id) {
    Registro15301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15301(Registro15301 r) {
    return r.valor + r.id;
}
