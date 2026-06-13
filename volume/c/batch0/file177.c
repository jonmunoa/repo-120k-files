// fichero 177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro177;

Registro177 crear_registro177(int id) {
    Registro177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro177(Registro177 r) {
    return r.valor + r.id;
}
