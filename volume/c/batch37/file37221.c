// fichero 37221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37221;

Registro37221 crear_registro37221(int id) {
    Registro37221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37221(Registro37221 r) {
    return r.valor + r.id;
}
