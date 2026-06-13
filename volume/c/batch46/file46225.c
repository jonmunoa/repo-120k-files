// fichero 46225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46225;

Registro46225 crear_registro46225(int id) {
    Registro46225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46225(Registro46225 r) {
    return r.valor + r.id;
}
