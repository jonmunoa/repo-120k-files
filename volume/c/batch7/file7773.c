// fichero 7773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7773;

Registro7773 crear_registro7773(int id) {
    Registro7773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7773(Registro7773 r) {
    return r.valor + r.id;
}
