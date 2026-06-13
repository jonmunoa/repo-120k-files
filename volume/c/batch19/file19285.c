// fichero 19285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19285;

Registro19285 crear_registro19285(int id) {
    Registro19285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19285(Registro19285 r) {
    return r.valor + r.id;
}
