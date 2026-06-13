// fichero 4753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4753;

Registro4753 crear_registro4753(int id) {
    Registro4753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4753(Registro4753 r) {
    return r.valor + r.id;
}
