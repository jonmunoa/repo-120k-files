// fichero 19345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19345;

Registro19345 crear_registro19345(int id) {
    Registro19345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19345(Registro19345 r) {
    return r.valor + r.id;
}
