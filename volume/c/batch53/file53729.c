// fichero 53729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53729;

Registro53729 crear_registro53729(int id) {
    Registro53729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53729(Registro53729 r) {
    return r.valor + r.id;
}
