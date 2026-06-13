// fichero 38709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38709;

Registro38709 crear_registro38709(int id) {
    Registro38709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38709(Registro38709 r) {
    return r.valor + r.id;
}
