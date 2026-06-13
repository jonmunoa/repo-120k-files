// fichero 37937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37937;

Registro37937 crear_registro37937(int id) {
    Registro37937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37937(Registro37937 r) {
    return r.valor + r.id;
}
