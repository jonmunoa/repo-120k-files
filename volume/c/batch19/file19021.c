// fichero 19021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19021;

Registro19021 crear_registro19021(int id) {
    Registro19021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19021(Registro19021 r) {
    return r.valor + r.id;
}
