// fichero 19733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19733;

Registro19733 crear_registro19733(int id) {
    Registro19733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19733(Registro19733 r) {
    return r.valor + r.id;
}
