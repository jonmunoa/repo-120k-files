// fichero 41297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41297;

Registro41297 crear_registro41297(int id) {
    Registro41297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41297(Registro41297 r) {
    return r.valor + r.id;
}
