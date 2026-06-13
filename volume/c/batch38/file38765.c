// fichero 38765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38765;

Registro38765 crear_registro38765(int id) {
    Registro38765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38765(Registro38765 r) {
    return r.valor + r.id;
}
