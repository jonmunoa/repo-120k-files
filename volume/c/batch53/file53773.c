// fichero 53773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53773;

Registro53773 crear_registro53773(int id) {
    Registro53773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53773(Registro53773 r) {
    return r.valor + r.id;
}
