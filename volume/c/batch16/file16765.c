// fichero 16765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16765;

Registro16765 crear_registro16765(int id) {
    Registro16765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16765(Registro16765 r) {
    return r.valor + r.id;
}
