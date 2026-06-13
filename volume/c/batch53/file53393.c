// fichero 53393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53393;

Registro53393 crear_registro53393(int id) {
    Registro53393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53393(Registro53393 r) {
    return r.valor + r.id;
}
