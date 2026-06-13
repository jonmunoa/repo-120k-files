// fichero 14177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14177;

Registro14177 crear_registro14177(int id) {
    Registro14177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14177(Registro14177 r) {
    return r.valor + r.id;
}
