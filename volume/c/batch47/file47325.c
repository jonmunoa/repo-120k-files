// fichero 47325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47325;

Registro47325 crear_registro47325(int id) {
    Registro47325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47325(Registro47325 r) {
    return r.valor + r.id;
}
