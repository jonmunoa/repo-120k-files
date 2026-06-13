// fichero 19033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19033;

Registro19033 crear_registro19033(int id) {
    Registro19033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19033(Registro19033 r) {
    return r.valor + r.id;
}
