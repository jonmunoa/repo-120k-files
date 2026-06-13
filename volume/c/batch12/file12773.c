// fichero 12773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12773;

Registro12773 crear_registro12773(int id) {
    Registro12773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12773(Registro12773 r) {
    return r.valor + r.id;
}
