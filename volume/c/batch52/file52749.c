// fichero 52749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52749;

Registro52749 crear_registro52749(int id) {
    Registro52749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52749(Registro52749 r) {
    return r.valor + r.id;
}
