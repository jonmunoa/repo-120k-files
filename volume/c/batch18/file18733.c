// fichero 18733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18733;

Registro18733 crear_registro18733(int id) {
    Registro18733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18733(Registro18733 r) {
    return r.valor + r.id;
}
