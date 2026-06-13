// fichero 38273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38273;

Registro38273 crear_registro38273(int id) {
    Registro38273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38273(Registro38273 r) {
    return r.valor + r.id;
}
