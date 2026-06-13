// fichero 14509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14509;

Registro14509 crear_registro14509(int id) {
    Registro14509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14509(Registro14509 r) {
    return r.valor + r.id;
}
