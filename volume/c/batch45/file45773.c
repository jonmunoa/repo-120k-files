// fichero 45773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45773;

Registro45773 crear_registro45773(int id) {
    Registro45773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45773(Registro45773 r) {
    return r.valor + r.id;
}
