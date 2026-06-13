// fichero 49729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49729;

Registro49729 crear_registro49729(int id) {
    Registro49729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49729(Registro49729 r) {
    return r.valor + r.id;
}
