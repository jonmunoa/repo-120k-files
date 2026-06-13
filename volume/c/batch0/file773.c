// fichero 773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro773;

Registro773 crear_registro773(int id) {
    Registro773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro773(Registro773 r) {
    return r.valor + r.id;
}
