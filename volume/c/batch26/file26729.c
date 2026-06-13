// fichero 26729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26729;

Registro26729 crear_registro26729(int id) {
    Registro26729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26729(Registro26729 r) {
    return r.valor + r.id;
}
