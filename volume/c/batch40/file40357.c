// fichero 40357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40357;

Registro40357 crear_registro40357(int id) {
    Registro40357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40357(Registro40357 r) {
    return r.valor + r.id;
}
