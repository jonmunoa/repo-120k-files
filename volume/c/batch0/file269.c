// fichero 269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro269;

Registro269 crear_registro269(int id) {
    Registro269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro269(Registro269 r) {
    return r.valor + r.id;
}
