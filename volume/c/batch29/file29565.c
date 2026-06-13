// fichero 29565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29565;

Registro29565 crear_registro29565(int id) {
    Registro29565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29565(Registro29565 r) {
    return r.valor + r.id;
}
