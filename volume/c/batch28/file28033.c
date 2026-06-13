// fichero 28033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28033;

Registro28033 crear_registro28033(int id) {
    Registro28033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28033(Registro28033 r) {
    return r.valor + r.id;
}
