// fichero 39393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39393;

Registro39393 crear_registro39393(int id) {
    Registro39393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39393(Registro39393 r) {
    return r.valor + r.id;
}
