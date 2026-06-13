// fichero 1773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1773;

Registro1773 crear_registro1773(int id) {
    Registro1773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1773(Registro1773 r) {
    return r.valor + r.id;
}
