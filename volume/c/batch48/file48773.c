// fichero 48773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48773;

Registro48773 crear_registro48773(int id) {
    Registro48773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48773(Registro48773 r) {
    return r.valor + r.id;
}
