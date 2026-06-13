// fichero 49269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49269;

Registro49269 crear_registro49269(int id) {
    Registro49269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49269(Registro49269 r) {
    return r.valor + r.id;
}
