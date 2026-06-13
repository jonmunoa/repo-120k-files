// fichero 46417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46417;

Registro46417 crear_registro46417(int id) {
    Registro46417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46417(Registro46417 r) {
    return r.valor + r.id;
}
