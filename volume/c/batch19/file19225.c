// fichero 19225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19225;

Registro19225 crear_registro19225(int id) {
    Registro19225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19225(Registro19225 r) {
    return r.valor + r.id;
}
