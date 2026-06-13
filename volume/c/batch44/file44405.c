// fichero 44405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44405;

Registro44405 crear_registro44405(int id) {
    Registro44405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44405(Registro44405 r) {
    return r.valor + r.id;
}
