// fichero 19405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19405;

Registro19405 crear_registro19405(int id) {
    Registro19405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19405(Registro19405 r) {
    return r.valor + r.id;
}
