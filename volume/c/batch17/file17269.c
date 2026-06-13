// fichero 17269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17269;

Registro17269 crear_registro17269(int id) {
    Registro17269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17269(Registro17269 r) {
    return r.valor + r.id;
}
