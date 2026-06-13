// fichero 16865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16865;

Registro16865 crear_registro16865(int id) {
    Registro16865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16865(Registro16865 r) {
    return r.valor + r.id;
}
