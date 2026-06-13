// fichero 38813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38813;

Registro38813 crear_registro38813(int id) {
    Registro38813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38813(Registro38813 r) {
    return r.valor + r.id;
}
