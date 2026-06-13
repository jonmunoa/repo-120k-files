// fichero 7937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7937;

Registro7937 crear_registro7937(int id) {
    Registro7937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7937(Registro7937 r) {
    return r.valor + r.id;
}
