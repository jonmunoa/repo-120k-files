// fichero 4129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4129;

Registro4129 crear_registro4129(int id) {
    Registro4129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4129(Registro4129 r) {
    return r.valor + r.id;
}
