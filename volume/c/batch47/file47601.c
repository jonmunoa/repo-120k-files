// fichero 47601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47601;

Registro47601 crear_registro47601(int id) {
    Registro47601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47601(Registro47601 r) {
    return r.valor + r.id;
}
