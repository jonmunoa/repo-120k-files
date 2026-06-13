// fichero 46353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46353;

Registro46353 crear_registro46353(int id) {
    Registro46353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46353(Registro46353 r) {
    return r.valor + r.id;
}
