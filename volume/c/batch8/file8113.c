// fichero 8113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8113;

Registro8113 crear_registro8113(int id) {
    Registro8113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8113(Registro8113 r) {
    return r.valor + r.id;
}
