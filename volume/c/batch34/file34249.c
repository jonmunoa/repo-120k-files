// fichero 34249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34249;

Registro34249 crear_registro34249(int id) {
    Registro34249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34249(Registro34249 r) {
    return r.valor + r.id;
}
