// fichero 51773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51773;

Registro51773 crear_registro51773(int id) {
    Registro51773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51773(Registro51773 r) {
    return r.valor + r.id;
}
