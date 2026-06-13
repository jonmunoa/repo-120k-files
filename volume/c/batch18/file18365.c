// fichero 18365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18365;

Registro18365 crear_registro18365(int id) {
    Registro18365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18365(Registro18365 r) {
    return r.valor + r.id;
}
