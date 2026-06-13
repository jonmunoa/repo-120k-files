// fichero 11497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11497;

Registro11497 crear_registro11497(int id) {
    Registro11497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11497(Registro11497 r) {
    return r.valor + r.id;
}
