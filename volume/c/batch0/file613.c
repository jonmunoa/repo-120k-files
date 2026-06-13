// fichero 613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro613;

Registro613 crear_registro613(int id) {
    Registro613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro613(Registro613 r) {
    return r.valor + r.id;
}
