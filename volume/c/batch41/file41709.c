// fichero 41709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41709;

Registro41709 crear_registro41709(int id) {
    Registro41709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41709(Registro41709 r) {
    return r.valor + r.id;
}
