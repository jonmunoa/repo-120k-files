// fichero 48309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48309;

Registro48309 crear_registro48309(int id) {
    Registro48309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48309(Registro48309 r) {
    return r.valor + r.id;
}
