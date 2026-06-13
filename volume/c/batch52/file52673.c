// fichero 52673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52673;

Registro52673 crear_registro52673(int id) {
    Registro52673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52673(Registro52673 r) {
    return r.valor + r.id;
}
