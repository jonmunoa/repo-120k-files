// fichero 11773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11773;

Registro11773 crear_registro11773(int id) {
    Registro11773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11773(Registro11773 r) {
    return r.valor + r.id;
}
