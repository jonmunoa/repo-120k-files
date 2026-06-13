// fichero 15865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15865;

Registro15865 crear_registro15865(int id) {
    Registro15865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15865(Registro15865 r) {
    return r.valor + r.id;
}
