// fichero 20757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20757;

Registro20757 crear_registro20757(int id) {
    Registro20757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20757(Registro20757 r) {
    return r.valor + r.id;
}
