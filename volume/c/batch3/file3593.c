// fichero 3593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3593;

Registro3593 crear_registro3593(int id) {
    Registro3593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3593(Registro3593 r) {
    return r.valor + r.id;
}
