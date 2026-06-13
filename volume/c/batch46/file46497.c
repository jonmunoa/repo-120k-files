// fichero 46497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46497;

Registro46497 crear_registro46497(int id) {
    Registro46497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46497(Registro46497 r) {
    return r.valor + r.id;
}
