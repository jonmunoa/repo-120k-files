// fichero 19089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19089;

Registro19089 crear_registro19089(int id) {
    Registro19089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19089(Registro19089 r) {
    return r.valor + r.id;
}
