// fichero 53517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53517;

Registro53517 crear_registro53517(int id) {
    Registro53517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53517(Registro53517 r) {
    return r.valor + r.id;
}
