// fichero 18625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18625;

Registro18625 crear_registro18625(int id) {
    Registro18625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18625(Registro18625 r) {
    return r.valor + r.id;
}
