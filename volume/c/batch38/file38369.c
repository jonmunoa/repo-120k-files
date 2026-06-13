// fichero 38369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38369;

Registro38369 crear_registro38369(int id) {
    Registro38369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38369(Registro38369 r) {
    return r.valor + r.id;
}
