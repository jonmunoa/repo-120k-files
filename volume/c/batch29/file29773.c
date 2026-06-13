// fichero 29773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29773;

Registro29773 crear_registro29773(int id) {
    Registro29773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29773(Registro29773 r) {
    return r.valor + r.id;
}
