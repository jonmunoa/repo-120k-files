// fichero 42773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42773;

Registro42773 crear_registro42773(int id) {
    Registro42773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42773(Registro42773 r) {
    return r.valor + r.id;
}
