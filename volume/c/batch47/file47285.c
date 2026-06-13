// fichero 47285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47285;

Registro47285 crear_registro47285(int id) {
    Registro47285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47285(Registro47285 r) {
    return r.valor + r.id;
}
