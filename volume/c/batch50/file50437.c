// fichero 50437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50437;

Registro50437 crear_registro50437(int id) {
    Registro50437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50437(Registro50437 r) {
    return r.valor + r.id;
}
