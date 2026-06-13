// fichero 33953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33953;

Registro33953 crear_registro33953(int id) {
    Registro33953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33953(Registro33953 r) {
    return r.valor + r.id;
}
