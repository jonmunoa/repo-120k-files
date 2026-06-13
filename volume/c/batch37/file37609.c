// fichero 37609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37609;

Registro37609 crear_registro37609(int id) {
    Registro37609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37609(Registro37609 r) {
    return r.valor + r.id;
}
