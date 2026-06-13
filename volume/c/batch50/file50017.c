// fichero 50017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50017;

Registro50017 crear_registro50017(int id) {
    Registro50017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50017(Registro50017 r) {
    return r.valor + r.id;
}
