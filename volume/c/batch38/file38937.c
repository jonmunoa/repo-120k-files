// fichero 38937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38937;

Registro38937 crear_registro38937(int id) {
    Registro38937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38937(Registro38937 r) {
    return r.valor + r.id;
}
