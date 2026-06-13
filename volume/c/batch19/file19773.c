// fichero 19773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19773;

Registro19773 crear_registro19773(int id) {
    Registro19773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19773(Registro19773 r) {
    return r.valor + r.id;
}
