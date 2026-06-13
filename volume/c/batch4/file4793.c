// fichero 4793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4793;

Registro4793 crear_registro4793(int id) {
    Registro4793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4793(Registro4793 r) {
    return r.valor + r.id;
}
