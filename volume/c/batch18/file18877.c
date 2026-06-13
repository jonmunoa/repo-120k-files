// fichero 18877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18877;

Registro18877 crear_registro18877(int id) {
    Registro18877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18877(Registro18877 r) {
    return r.valor + r.id;
}
