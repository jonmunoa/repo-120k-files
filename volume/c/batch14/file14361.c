// fichero 14361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14361;

Registro14361 crear_registro14361(int id) {
    Registro14361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14361(Registro14361 r) {
    return r.valor + r.id;
}
