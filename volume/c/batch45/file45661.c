// fichero 45661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45661;

Registro45661 crear_registro45661(int id) {
    Registro45661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45661(Registro45661 r) {
    return r.valor + r.id;
}
