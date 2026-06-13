// fichero 26773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26773;

Registro26773 crear_registro26773(int id) {
    Registro26773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26773(Registro26773 r) {
    return r.valor + r.id;
}
