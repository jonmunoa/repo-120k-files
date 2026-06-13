// fichero 31853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31853;

Registro31853 crear_registro31853(int id) {
    Registro31853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31853(Registro31853 r) {
    return r.valor + r.id;
}
