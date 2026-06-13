// fichero 18401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18401;

Registro18401 crear_registro18401(int id) {
    Registro18401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18401(Registro18401 r) {
    return r.valor + r.id;
}
