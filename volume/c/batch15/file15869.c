// fichero 15869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15869;

Registro15869 crear_registro15869(int id) {
    Registro15869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15869(Registro15869 r) {
    return r.valor + r.id;
}
