// fichero 18061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18061;

Registro18061 crear_registro18061(int id) {
    Registro18061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18061(Registro18061 r) {
    return r.valor + r.id;
}
