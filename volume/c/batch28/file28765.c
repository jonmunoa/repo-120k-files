// fichero 28765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28765;

Registro28765 crear_registro28765(int id) {
    Registro28765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28765(Registro28765 r) {
    return r.valor + r.id;
}
