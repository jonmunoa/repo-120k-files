// fichero 31929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31929;

Registro31929 crear_registro31929(int id) {
    Registro31929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31929(Registro31929 r) {
    return r.valor + r.id;
}
