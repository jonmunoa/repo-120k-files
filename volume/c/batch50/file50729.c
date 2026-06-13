// fichero 50729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50729;

Registro50729 crear_registro50729(int id) {
    Registro50729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50729(Registro50729 r) {
    return r.valor + r.id;
}
