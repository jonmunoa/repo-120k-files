// fichero 37961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37961;

Registro37961 crear_registro37961(int id) {
    Registro37961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37961(Registro37961 r) {
    return r.valor + r.id;
}
