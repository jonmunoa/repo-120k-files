// fichero 31129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31129;

Registro31129 crear_registro31129(int id) {
    Registro31129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31129(Registro31129 r) {
    return r.valor + r.id;
}
