// fichero 285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro285;

Registro285 crear_registro285(int id) {
    Registro285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro285(Registro285 r) {
    return r.valor + r.id;
}
