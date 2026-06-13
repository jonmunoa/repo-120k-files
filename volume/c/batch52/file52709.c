// fichero 52709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52709;

Registro52709 crear_registro52709(int id) {
    Registro52709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52709(Registro52709 r) {
    return r.valor + r.id;
}
