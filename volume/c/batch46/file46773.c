// fichero 46773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46773;

Registro46773 crear_registro46773(int id) {
    Registro46773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46773(Registro46773 r) {
    return r.valor + r.id;
}
