// fichero 18249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18249;

Registro18249 crear_registro18249(int id) {
    Registro18249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18249(Registro18249 r) {
    return r.valor + r.id;
}
