// fichero 38961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38961;

Registro38961 crear_registro38961(int id) {
    Registro38961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38961(Registro38961 r) {
    return r.valor + r.id;
}
