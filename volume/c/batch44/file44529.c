// fichero 44529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44529;

Registro44529 crear_registro44529(int id) {
    Registro44529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44529(Registro44529 r) {
    return r.valor + r.id;
}
