// fichero 34709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34709;

Registro34709 crear_registro34709(int id) {
    Registro34709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34709(Registro34709 r) {
    return r.valor + r.id;
}
