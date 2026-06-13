// fichero 49913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49913;

Registro49913 crear_registro49913(int id) {
    Registro49913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49913(Registro49913 r) {
    return r.valor + r.id;
}
