// fichero 32773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32773;

Registro32773 crear_registro32773(int id) {
    Registro32773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32773(Registro32773 r) {
    return r.valor + r.id;
}
