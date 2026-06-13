// fichero 28865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28865;

Registro28865 crear_registro28865(int id) {
    Registro28865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28865(Registro28865 r) {
    return r.valor + r.id;
}
