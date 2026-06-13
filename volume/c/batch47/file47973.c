// fichero 47973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47973;

Registro47973 crear_registro47973(int id) {
    Registro47973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47973(Registro47973 r) {
    return r.valor + r.id;
}
