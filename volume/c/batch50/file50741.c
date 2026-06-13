// fichero 50741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50741;

Registro50741 crear_registro50741(int id) {
    Registro50741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50741(Registro50741 r) {
    return r.valor + r.id;
}
