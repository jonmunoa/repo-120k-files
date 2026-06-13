// fichero 42905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42905;

Registro42905 crear_registro42905(int id) {
    Registro42905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42905(Registro42905 r) {
    return r.valor + r.id;
}
