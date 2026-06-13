// fichero 645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro645;

Registro645 crear_registro645(int id) {
    Registro645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro645(Registro645 r) {
    return r.valor + r.id;
}
