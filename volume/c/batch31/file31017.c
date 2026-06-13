// fichero 31017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31017;

Registro31017 crear_registro31017(int id) {
    Registro31017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31017(Registro31017 r) {
    return r.valor + r.id;
}
