// fichero 52357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52357;

Registro52357 crear_registro52357(int id) {
    Registro52357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52357(Registro52357 r) {
    return r.valor + r.id;
}
