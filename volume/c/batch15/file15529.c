// fichero 15529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15529;

Registro15529 crear_registro15529(int id) {
    Registro15529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15529(Registro15529 r) {
    return r.valor + r.id;
}
