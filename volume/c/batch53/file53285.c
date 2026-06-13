// fichero 53285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53285;

Registro53285 crear_registro53285(int id) {
    Registro53285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53285(Registro53285 r) {
    return r.valor + r.id;
}
