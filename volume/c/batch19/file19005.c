// fichero 19005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19005;

Registro19005 crear_registro19005(int id) {
    Registro19005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19005(Registro19005 r) {
    return r.valor + r.id;
}
