// fichero 53265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53265;

Registro53265 crear_registro53265(int id) {
    Registro53265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53265(Registro53265 r) {
    return r.valor + r.id;
}
