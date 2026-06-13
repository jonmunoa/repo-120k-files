// fichero 4369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4369;

Registro4369 crear_registro4369(int id) {
    Registro4369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4369(Registro4369 r) {
    return r.valor + r.id;
}
