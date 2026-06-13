// fichero 46313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46313;

Registro46313 crear_registro46313(int id) {
    Registro46313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46313(Registro46313 r) {
    return r.valor + r.id;
}
