// fichero 28417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28417;

Registro28417 crear_registro28417(int id) {
    Registro28417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28417(Registro28417 r) {
    return r.valor + r.id;
}
