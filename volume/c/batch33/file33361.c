// fichero 33361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33361;

Registro33361 crear_registro33361(int id) {
    Registro33361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33361(Registro33361 r) {
    return r.valor + r.id;
}
