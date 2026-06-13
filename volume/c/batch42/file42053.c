// fichero 42053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42053;

Registro42053 crear_registro42053(int id) {
    Registro42053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42053(Registro42053 r) {
    return r.valor + r.id;
}
