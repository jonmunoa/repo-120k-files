// fichero 26497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26497;

Registro26497 crear_registro26497(int id) {
    Registro26497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26497(Registro26497 r) {
    return r.valor + r.id;
}
