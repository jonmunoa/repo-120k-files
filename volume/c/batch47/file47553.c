// fichero 47553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47553;

Registro47553 crear_registro47553(int id) {
    Registro47553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47553(Registro47553 r) {
    return r.valor + r.id;
}
