// fichero 53537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53537;

Registro53537 crear_registro53537(int id) {
    Registro53537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53537(Registro53537 r) {
    return r.valor + r.id;
}
