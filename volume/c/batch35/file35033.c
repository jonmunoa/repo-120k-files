// fichero 35033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35033;

Registro35033 crear_registro35033(int id) {
    Registro35033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35033(Registro35033 r) {
    return r.valor + r.id;
}
