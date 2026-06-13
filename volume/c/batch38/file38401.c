// fichero 38401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38401;

Registro38401 crear_registro38401(int id) {
    Registro38401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38401(Registro38401 r) {
    return r.valor + r.id;
}
