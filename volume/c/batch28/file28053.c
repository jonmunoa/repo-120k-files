// fichero 28053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28053;

Registro28053 crear_registro28053(int id) {
    Registro28053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28053(Registro28053 r) {
    return r.valor + r.id;
}
