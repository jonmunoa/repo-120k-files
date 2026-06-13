// fichero 34053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34053;

Registro34053 crear_registro34053(int id) {
    Registro34053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34053(Registro34053 r) {
    return r.valor + r.id;
}
