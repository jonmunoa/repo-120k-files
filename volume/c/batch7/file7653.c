// fichero 7653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7653;

Registro7653 crear_registro7653(int id) {
    Registro7653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7653(Registro7653 r) {
    return r.valor + r.id;
}
