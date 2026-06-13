// fichero 37977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37977;

Registro37977 crear_registro37977(int id) {
    Registro37977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37977(Registro37977 r) {
    return r.valor + r.id;
}
