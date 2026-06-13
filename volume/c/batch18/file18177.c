// fichero 18177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18177;

Registro18177 crear_registro18177(int id) {
    Registro18177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18177(Registro18177 r) {
    return r.valor + r.id;
}
