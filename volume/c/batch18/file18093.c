// fichero 18093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18093;

Registro18093 crear_registro18093(int id) {
    Registro18093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18093(Registro18093 r) {
    return r.valor + r.id;
}
