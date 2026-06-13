// fichero 7973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7973;

Registro7973 crear_registro7973(int id) {
    Registro7973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7973(Registro7973 r) {
    return r.valor + r.id;
}
