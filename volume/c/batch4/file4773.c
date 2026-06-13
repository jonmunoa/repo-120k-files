// fichero 4773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4773;

Registro4773 crear_registro4773(int id) {
    Registro4773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4773(Registro4773 r) {
    return r.valor + r.id;
}
