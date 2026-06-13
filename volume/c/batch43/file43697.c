// fichero 43697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43697;

Registro43697 crear_registro43697(int id) {
    Registro43697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43697(Registro43697 r) {
    return r.valor + r.id;
}
