// fichero 17101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17101;

Registro17101 crear_registro17101(int id) {
    Registro17101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17101(Registro17101 r) {
    return r.valor + r.id;
}
