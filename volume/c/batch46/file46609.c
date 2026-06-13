// fichero 46609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46609;

Registro46609 crear_registro46609(int id) {
    Registro46609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46609(Registro46609 r) {
    return r.valor + r.id;
}
