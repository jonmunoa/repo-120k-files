// fichero 30773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30773;

Registro30773 crear_registro30773(int id) {
    Registro30773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30773(Registro30773 r) {
    return r.valor + r.id;
}
