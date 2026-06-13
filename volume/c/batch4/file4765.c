// fichero 4765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4765;

Registro4765 crear_registro4765(int id) {
    Registro4765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4765(Registro4765 r) {
    return r.valor + r.id;
}
