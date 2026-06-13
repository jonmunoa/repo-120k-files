// fichero 7057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7057;

Registro7057 crear_registro7057(int id) {
    Registro7057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7057(Registro7057 r) {
    return r.valor + r.id;
}
