// fichero 48361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48361;

Registro48361 crear_registro48361(int id) {
    Registro48361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48361(Registro48361 r) {
    return r.valor + r.id;
}
