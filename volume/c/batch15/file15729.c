// fichero 15729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15729;

Registro15729 crear_registro15729(int id) {
    Registro15729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15729(Registro15729 r) {
    return r.valor + r.id;
}
