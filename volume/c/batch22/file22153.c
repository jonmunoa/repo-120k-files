// fichero 22153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22153;

Registro22153 crear_registro22153(int id) {
    Registro22153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22153(Registro22153 r) {
    return r.valor + r.id;
}
