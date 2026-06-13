// fichero 46053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46053;

Registro46053 crear_registro46053(int id) {
    Registro46053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46053(Registro46053 r) {
    return r.valor + r.id;
}
