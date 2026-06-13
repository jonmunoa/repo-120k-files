// fichero 19197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19197;

Registro19197 crear_registro19197(int id) {
    Registro19197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19197(Registro19197 r) {
    return r.valor + r.id;
}
