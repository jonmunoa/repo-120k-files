// fichero 11165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11165;

Registro11165 crear_registro11165(int id) {
    Registro11165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11165(Registro11165 r) {
    return r.valor + r.id;
}
