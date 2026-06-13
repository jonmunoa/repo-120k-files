// fichero 38773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38773;

Registro38773 crear_registro38773(int id) {
    Registro38773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38773(Registro38773 r) {
    return r.valor + r.id;
}
