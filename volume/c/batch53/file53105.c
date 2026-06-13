// fichero 53105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53105;

Registro53105 crear_registro53105(int id) {
    Registro53105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53105(Registro53105 r) {
    return r.valor + r.id;
}
