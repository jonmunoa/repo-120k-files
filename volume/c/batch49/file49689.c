// fichero 49689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49689;

Registro49689 crear_registro49689(int id) {
    Registro49689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49689(Registro49689 r) {
    return r.valor + r.id;
}
