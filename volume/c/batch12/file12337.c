// fichero 12337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12337;

Registro12337 crear_registro12337(int id) {
    Registro12337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12337(Registro12337 r) {
    return r.valor + r.id;
}
