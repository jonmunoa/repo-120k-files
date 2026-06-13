// fichero 49293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49293;

Registro49293 crear_registro49293(int id) {
    Registro49293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49293(Registro49293 r) {
    return r.valor + r.id;
}
