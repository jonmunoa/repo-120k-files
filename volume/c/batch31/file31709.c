// fichero 31709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31709;

Registro31709 crear_registro31709(int id) {
    Registro31709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31709(Registro31709 r) {
    return r.valor + r.id;
}
