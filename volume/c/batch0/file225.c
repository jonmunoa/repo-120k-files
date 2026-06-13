// fichero 225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro225;

Registro225 crear_registro225(int id) {
    Registro225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro225(Registro225 r) {
    return r.valor + r.id;
}
