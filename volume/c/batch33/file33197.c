// fichero 33197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33197;

Registro33197 crear_registro33197(int id) {
    Registro33197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33197(Registro33197 r) {
    return r.valor + r.id;
}
