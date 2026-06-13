// fichero 27709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27709;

Registro27709 crear_registro27709(int id) {
    Registro27709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27709(Registro27709 r) {
    return r.valor + r.id;
}
