// fichero 557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro557;

Registro557 crear_registro557(int id) {
    Registro557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro557(Registro557 r) {
    return r.valor + r.id;
}
