// fichero 31593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31593;

Registro31593 crear_registro31593(int id) {
    Registro31593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31593(Registro31593 r) {
    return r.valor + r.id;
}
