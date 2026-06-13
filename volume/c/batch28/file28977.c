// fichero 28977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28977;

Registro28977 crear_registro28977(int id) {
    Registro28977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28977(Registro28977 r) {
    return r.valor + r.id;
}
