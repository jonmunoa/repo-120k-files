// fichero 15193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15193;

Registro15193 crear_registro15193(int id) {
    Registro15193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15193(Registro15193 r) {
    return r.valor + r.id;
}
