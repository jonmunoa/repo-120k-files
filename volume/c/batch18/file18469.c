// fichero 18469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18469;

Registro18469 crear_registro18469(int id) {
    Registro18469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18469(Registro18469 r) {
    return r.valor + r.id;
}
