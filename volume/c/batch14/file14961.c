// fichero 14961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14961;

Registro14961 crear_registro14961(int id) {
    Registro14961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14961(Registro14961 r) {
    return r.valor + r.id;
}
