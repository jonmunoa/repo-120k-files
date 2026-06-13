// fichero 8709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8709;

Registro8709 crear_registro8709(int id) {
    Registro8709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8709(Registro8709 r) {
    return r.valor + r.id;
}
