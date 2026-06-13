// fichero 26509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26509;

Registro26509 crear_registro26509(int id) {
    Registro26509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26509(Registro26509 r) {
    return r.valor + r.id;
}
