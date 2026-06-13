// fichero 54765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54765;

Registro54765 crear_registro54765(int id) {
    Registro54765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54765(Registro54765 r) {
    return r.valor + r.id;
}
