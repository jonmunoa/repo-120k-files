// fichero 14773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14773;

Registro14773 crear_registro14773(int id) {
    Registro14773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14773(Registro14773 r) {
    return r.valor + r.id;
}
