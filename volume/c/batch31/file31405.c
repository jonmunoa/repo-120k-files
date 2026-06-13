// fichero 31405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31405;

Registro31405 crear_registro31405(int id) {
    Registro31405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31405(Registro31405 r) {
    return r.valor + r.id;
}
