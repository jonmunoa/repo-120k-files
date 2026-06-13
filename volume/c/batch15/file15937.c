// fichero 15937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15937;

Registro15937 crear_registro15937(int id) {
    Registro15937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15937(Registro15937 r) {
    return r.valor + r.id;
}
