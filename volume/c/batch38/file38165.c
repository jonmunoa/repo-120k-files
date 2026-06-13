// fichero 38165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38165;

Registro38165 crear_registro38165(int id) {
    Registro38165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38165(Registro38165 r) {
    return r.valor + r.id;
}
