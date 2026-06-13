// fichero 3773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3773;

Registro3773 crear_registro3773(int id) {
    Registro3773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3773(Registro3773 r) {
    return r.valor + r.id;
}
