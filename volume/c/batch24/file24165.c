// fichero 24165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24165;

Registro24165 crear_registro24165(int id) {
    Registro24165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24165(Registro24165 r) {
    return r.valor + r.id;
}
