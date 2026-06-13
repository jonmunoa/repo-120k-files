// fichero 8773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8773;

Registro8773 crear_registro8773(int id) {
    Registro8773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8773(Registro8773 r) {
    return r.valor + r.id;
}
