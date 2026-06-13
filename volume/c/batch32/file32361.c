// fichero 32361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32361;

Registro32361 crear_registro32361(int id) {
    Registro32361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32361(Registro32361 r) {
    return r.valor + r.id;
}
