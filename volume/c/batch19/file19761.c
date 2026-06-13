// fichero 19761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19761;

Registro19761 crear_registro19761(int id) {
    Registro19761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19761(Registro19761 r) {
    return r.valor + r.id;
}
