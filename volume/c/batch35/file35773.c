// fichero 35773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35773;

Registro35773 crear_registro35773(int id) {
    Registro35773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35773(Registro35773 r) {
    return r.valor + r.id;
}
