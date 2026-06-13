// fichero 47773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47773;

Registro47773 crear_registro47773(int id) {
    Registro47773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47773(Registro47773 r) {
    return r.valor + r.id;
}
