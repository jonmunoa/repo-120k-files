// fichero 43061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43061;

Registro43061 crear_registro43061(int id) {
    Registro43061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43061(Registro43061 r) {
    return r.valor + r.id;
}
