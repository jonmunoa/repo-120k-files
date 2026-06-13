// fichero 4053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4053;

Registro4053 crear_registro4053(int id) {
    Registro4053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4053(Registro4053 r) {
    return r.valor + r.id;
}
