// fichero 11101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11101;

Registro11101 crear_registro11101(int id) {
    Registro11101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11101(Registro11101 r) {
    return r.valor + r.id;
}
