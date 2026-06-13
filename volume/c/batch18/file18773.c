// fichero 18773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18773;

Registro18773 crear_registro18773(int id) {
    Registro18773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18773(Registro18773 r) {
    return r.valor + r.id;
}
