// fichero 34733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34733;

Registro34733 crear_registro34733(int id) {
    Registro34733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34733(Registro34733 r) {
    return r.valor + r.id;
}
