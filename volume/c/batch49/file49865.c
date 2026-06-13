// fichero 49865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49865;

Registro49865 crear_registro49865(int id) {
    Registro49865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49865(Registro49865 r) {
    return r.valor + r.id;
}
