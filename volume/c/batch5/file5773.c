// fichero 5773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5773;

Registro5773 crear_registro5773(int id) {
    Registro5773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5773(Registro5773 r) {
    return r.valor + r.id;
}
