// fichero 25773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25773;

Registro25773 crear_registro25773(int id) {
    Registro25773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25773(Registro25773 r) {
    return r.valor + r.id;
}
