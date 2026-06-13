// fichero 47629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47629;

Registro47629 crear_registro47629(int id) {
    Registro47629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47629(Registro47629 r) {
    return r.valor + r.id;
}
