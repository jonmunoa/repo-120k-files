// fichero 26969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26969;

Registro26969 crear_registro26969(int id) {
    Registro26969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26969(Registro26969 r) {
    return r.valor + r.id;
}
