// fichero 14821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14821;

Registro14821 crear_registro14821(int id) {
    Registro14821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14821(Registro14821 r) {
    return r.valor + r.id;
}
