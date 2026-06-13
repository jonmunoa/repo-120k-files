// fichero 43789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43789;

Registro43789 crear_registro43789(int id) {
    Registro43789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43789(Registro43789 r) {
    return r.valor + r.id;
}
