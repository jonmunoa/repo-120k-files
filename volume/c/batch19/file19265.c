// fichero 19265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19265;

Registro19265 crear_registro19265(int id) {
    Registro19265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19265(Registro19265 r) {
    return r.valor + r.id;
}
