// fichero 21453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21453;

Registro21453 crear_registro21453(int id) {
    Registro21453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21453(Registro21453 r) {
    return r.valor + r.id;
}
