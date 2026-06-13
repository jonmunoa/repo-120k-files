// fichero 54561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54561;

Registro54561 crear_registro54561(int id) {
    Registro54561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54561(Registro54561 r) {
    return r.valor + r.id;
}
