// fichero 5709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5709;

Registro5709 crear_registro5709(int id) {
    Registro5709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5709(Registro5709 r) {
    return r.valor + r.id;
}
