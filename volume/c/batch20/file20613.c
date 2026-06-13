// fichero 20613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20613;

Registro20613 crear_registro20613(int id) {
    Registro20613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20613(Registro20613 r) {
    return r.valor + r.id;
}
