// fichero 14865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14865;

Registro14865 crear_registro14865(int id) {
    Registro14865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14865(Registro14865 r) {
    return r.valor + r.id;
}
