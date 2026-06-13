// fichero 33293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33293;

Registro33293 crear_registro33293(int id) {
    Registro33293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33293(Registro33293 r) {
    return r.valor + r.id;
}
