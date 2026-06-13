// fichero 18853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18853;

Registro18853 crear_registro18853(int id) {
    Registro18853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18853(Registro18853 r) {
    return r.valor + r.id;
}
