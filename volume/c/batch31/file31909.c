// fichero 31909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31909;

Registro31909 crear_registro31909(int id) {
    Registro31909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31909(Registro31909 r) {
    return r.valor + r.id;
}
