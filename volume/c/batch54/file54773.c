// fichero 54773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54773;

Registro54773 crear_registro54773(int id) {
    Registro54773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54773(Registro54773 r) {
    return r.valor + r.id;
}
