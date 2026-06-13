// fichero 37773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37773;

Registro37773 crear_registro37773(int id) {
    Registro37773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37773(Registro37773 r) {
    return r.valor + r.id;
}
