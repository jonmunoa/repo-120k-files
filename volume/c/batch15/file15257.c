// fichero 15257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15257;

Registro15257 crear_registro15257(int id) {
    Registro15257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15257(Registro15257 r) {
    return r.valor + r.id;
}
