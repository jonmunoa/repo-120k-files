// fichero 27773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27773;

Registro27773 crear_registro27773(int id) {
    Registro27773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27773(Registro27773 r) {
    return r.valor + r.id;
}
