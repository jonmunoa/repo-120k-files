// fichero 4017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4017;

Registro4017 crear_registro4017(int id) {
    Registro4017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4017(Registro4017 r) {
    return r.valor + r.id;
}
