// fichero 4645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4645;

Registro4645 crear_registro4645(int id) {
    Registro4645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4645(Registro4645 r) {
    return r.valor + r.id;
}
