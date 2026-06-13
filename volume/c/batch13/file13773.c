// fichero 13773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13773;

Registro13773 crear_registro13773(int id) {
    Registro13773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13773(Registro13773 r) {
    return r.valor + r.id;
}
