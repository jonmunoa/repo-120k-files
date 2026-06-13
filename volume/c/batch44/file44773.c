// fichero 44773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44773;

Registro44773 crear_registro44773(int id) {
    Registro44773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44773(Registro44773 r) {
    return r.valor + r.id;
}
