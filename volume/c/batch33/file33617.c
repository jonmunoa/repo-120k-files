// fichero 33617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33617;

Registro33617 crear_registro33617(int id) {
    Registro33617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33617(Registro33617 r) {
    return r.valor + r.id;
}
