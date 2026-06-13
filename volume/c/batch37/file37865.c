// fichero 37865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37865;

Registro37865 crear_registro37865(int id) {
    Registro37865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37865(Registro37865 r) {
    return r.valor + r.id;
}
