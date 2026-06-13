// fichero 38285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38285;

Registro38285 crear_registro38285(int id) {
    Registro38285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38285(Registro38285 r) {
    return r.valor + r.id;
}
