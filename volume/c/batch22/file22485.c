// fichero 22485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22485;

Registro22485 crear_registro22485(int id) {
    Registro22485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22485(Registro22485 r) {
    return r.valor + r.id;
}
