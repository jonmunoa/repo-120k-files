// fichero 38313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38313;

Registro38313 crear_registro38313(int id) {
    Registro38313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38313(Registro38313 r) {
    return r.valor + r.id;
}
