// fichero 6017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6017;

Registro6017 crear_registro6017(int id) {
    Registro6017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6017(Registro6017 r) {
    return r.valor + r.id;
}
