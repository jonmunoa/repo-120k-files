// fichero 49245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49245;

Registro49245 crear_registro49245(int id) {
    Registro49245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49245(Registro49245 r) {
    return r.valor + r.id;
}
