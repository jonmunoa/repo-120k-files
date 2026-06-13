// fichero 31769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31769;

Registro31769 crear_registro31769(int id) {
    Registro31769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31769(Registro31769 r) {
    return r.valor + r.id;
}
