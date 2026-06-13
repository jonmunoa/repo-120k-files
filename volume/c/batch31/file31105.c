// fichero 31105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31105;

Registro31105 crear_registro31105(int id) {
    Registro31105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31105(Registro31105 r) {
    return r.valor + r.id;
}
