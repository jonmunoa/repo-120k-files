// fichero 19125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19125;

Registro19125 crear_registro19125(int id) {
    Registro19125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19125(Registro19125 r) {
    return r.valor + r.id;
}
