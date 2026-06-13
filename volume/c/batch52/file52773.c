// fichero 52773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52773;

Registro52773 crear_registro52773(int id) {
    Registro52773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52773(Registro52773 r) {
    return r.valor + r.id;
}
