// fichero 165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro165;

Registro165 crear_registro165(int id) {
    Registro165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro165(Registro165 r) {
    return r.valor + r.id;
}
