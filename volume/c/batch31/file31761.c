// fichero 31761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31761;

Registro31761 crear_registro31761(int id) {
    Registro31761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31761(Registro31761 r) {
    return r.valor + r.id;
}
