// fichero 593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro593;

Registro593 crear_registro593(int id) {
    Registro593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro593(Registro593 r) {
    return r.valor + r.id;
}
