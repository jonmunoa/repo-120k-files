// fichero 47765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47765;

Registro47765 crear_registro47765(int id) {
    Registro47765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47765(Registro47765 r) {
    return r.valor + r.id;
}
