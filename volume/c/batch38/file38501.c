// fichero 38501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38501;

Registro38501 crear_registro38501(int id) {
    Registro38501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38501(Registro38501 r) {
    return r.valor + r.id;
}
