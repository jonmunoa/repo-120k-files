// fichero 31617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31617;

Registro31617 crear_registro31617(int id) {
    Registro31617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31617(Registro31617 r) {
    return r.valor + r.id;
}
