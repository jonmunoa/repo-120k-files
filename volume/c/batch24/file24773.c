// fichero 24773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24773;

Registro24773 crear_registro24773(int id) {
    Registro24773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24773(Registro24773 r) {
    return r.valor + r.id;
}
