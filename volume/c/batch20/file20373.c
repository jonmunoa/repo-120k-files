// fichero 20373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20373;

Registro20373 crear_registro20373(int id) {
    Registro20373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20373(Registro20373 r) {
    return r.valor + r.id;
}
