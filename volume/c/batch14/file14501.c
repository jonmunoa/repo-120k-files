// fichero 14501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14501;

Registro14501 crear_registro14501(int id) {
    Registro14501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14501(Registro14501 r) {
    return r.valor + r.id;
}
