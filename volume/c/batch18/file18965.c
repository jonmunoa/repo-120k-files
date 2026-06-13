// fichero 18965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18965;

Registro18965 crear_registro18965(int id) {
    Registro18965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18965(Registro18965 r) {
    return r.valor + r.id;
}
