// fichero 6765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6765;

Registro6765 crear_registro6765(int id) {
    Registro6765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6765(Registro6765 r) {
    return r.valor + r.id;
}
