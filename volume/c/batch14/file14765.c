// fichero 14765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14765;

Registro14765 crear_registro14765(int id) {
    Registro14765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14765(Registro14765 r) {
    return r.valor + r.id;
}
