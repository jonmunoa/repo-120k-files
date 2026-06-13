// fichero 24201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24201;

Registro24201 crear_registro24201(int id) {
    Registro24201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24201(Registro24201 r) {
    return r.valor + r.id;
}
