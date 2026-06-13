// fichero 20577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20577;

Registro20577 crear_registro20577(int id) {
    Registro20577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20577(Registro20577 r) {
    return r.valor + r.id;
}
