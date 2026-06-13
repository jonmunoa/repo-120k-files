// fichero 18549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18549;

Registro18549 crear_registro18549(int id) {
    Registro18549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18549(Registro18549 r) {
    return r.valor + r.id;
}
