// fichero 4961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4961;

Registro4961 crear_registro4961(int id) {
    Registro4961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4961(Registro4961 r) {
    return r.valor + r.id;
}
