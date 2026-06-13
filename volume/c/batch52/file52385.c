// fichero 52385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52385;

Registro52385 crear_registro52385(int id) {
    Registro52385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52385(Registro52385 r) {
    return r.valor + r.id;
}
