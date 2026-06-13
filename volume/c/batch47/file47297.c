// fichero 47297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47297;

Registro47297 crear_registro47297(int id) {
    Registro47297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47297(Registro47297 r) {
    return r.valor + r.id;
}
