// fichero 31773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31773;

Registro31773 crear_registro31773(int id) {
    Registro31773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31773(Registro31773 r) {
    return r.valor + r.id;
}
