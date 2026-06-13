// fichero 19053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19053;

Registro19053 crear_registro19053(int id) {
    Registro19053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19053(Registro19053 r) {
    return r.valor + r.id;
}
