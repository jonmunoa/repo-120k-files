// fichero 19233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19233;

Registro19233 crear_registro19233(int id) {
    Registro19233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19233(Registro19233 r) {
    return r.valor + r.id;
}
