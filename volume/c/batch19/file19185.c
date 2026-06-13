// fichero 19185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19185;

Registro19185 crear_registro19185(int id) {
    Registro19185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19185(Registro19185 r) {
    return r.valor + r.id;
}
