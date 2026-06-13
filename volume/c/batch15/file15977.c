// fichero 15977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15977;

Registro15977 crear_registro15977(int id) {
    Registro15977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15977(Registro15977 r) {
    return r.valor + r.id;
}
