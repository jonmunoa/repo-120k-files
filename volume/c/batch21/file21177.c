// fichero 21177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21177;

Registro21177 crear_registro21177(int id) {
    Registro21177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21177(Registro21177 r) {
    return r.valor + r.id;
}
