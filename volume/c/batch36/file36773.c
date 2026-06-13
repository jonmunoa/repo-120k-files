// fichero 36773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36773;

Registro36773 crear_registro36773(int id) {
    Registro36773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36773(Registro36773 r) {
    return r.valor + r.id;
}
