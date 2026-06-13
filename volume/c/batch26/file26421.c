// fichero 26421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26421;

Registro26421 crear_registro26421(int id) {
    Registro26421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26421(Registro26421 r) {
    return r.valor + r.id;
}
