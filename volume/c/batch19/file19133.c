// fichero 19133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19133;

Registro19133 crear_registro19133(int id) {
    Registro19133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19133(Registro19133 r) {
    return r.valor + r.id;
}
