// fichero 19141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19141;

Registro19141 crear_registro19141(int id) {
    Registro19141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19141(Registro19141 r) {
    return r.valor + r.id;
}
