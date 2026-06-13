// fichero 39773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39773;

Registro39773 crear_registro39773(int id) {
    Registro39773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39773(Registro39773 r) {
    return r.valor + r.id;
}
