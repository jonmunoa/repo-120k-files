// fichero 18129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18129;

Registro18129 crear_registro18129(int id) {
    Registro18129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18129(Registro18129 r) {
    return r.valor + r.id;
}
