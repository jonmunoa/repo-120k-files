// fichero 14409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14409;

Registro14409 crear_registro14409(int id) {
    Registro14409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14409(Registro14409 r) {
    return r.valor + r.id;
}
