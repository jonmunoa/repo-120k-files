// fichero 49449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49449;

Registro49449 crear_registro49449(int id) {
    Registro49449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49449(Registro49449 r) {
    return r.valor + r.id;
}
