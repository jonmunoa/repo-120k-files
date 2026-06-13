// fichero 2361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2361;

Registro2361 crear_registro2361(int id) {
    Registro2361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2361(Registro2361 r) {
    return r.valor + r.id;
}
