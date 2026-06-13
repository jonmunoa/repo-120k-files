// fichero 19885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19885;

Registro19885 crear_registro19885(int id) {
    Registro19885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19885(Registro19885 r) {
    return r.valor + r.id;
}
