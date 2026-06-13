// fichero 27593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27593;

Registro27593 crear_registro27593(int id) {
    Registro27593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27593(Registro27593 r) {
    return r.valor + r.id;
}
