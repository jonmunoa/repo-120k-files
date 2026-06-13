// fichero 50769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50769;

Registro50769 crear_registro50769(int id) {
    Registro50769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50769(Registro50769 r) {
    return r.valor + r.id;
}
