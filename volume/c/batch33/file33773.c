// fichero 33773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33773;

Registro33773 crear_registro33773(int id) {
    Registro33773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33773(Registro33773 r) {
    return r.valor + r.id;
}
