// fichero 43773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43773;

Registro43773 crear_registro43773(int id) {
    Registro43773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43773(Registro43773 r) {
    return r.valor + r.id;
}
