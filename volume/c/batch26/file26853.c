// fichero 26853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26853;

Registro26853 crear_registro26853(int id) {
    Registro26853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26853(Registro26853 r) {
    return r.valor + r.id;
}
