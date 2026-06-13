// fichero 18213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18213;

Registro18213 crear_registro18213(int id) {
    Registro18213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18213(Registro18213 r) {
    return r.valor + r.id;
}
