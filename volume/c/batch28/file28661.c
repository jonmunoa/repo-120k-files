// fichero 28661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28661;

Registro28661 crear_registro28661(int id) {
    Registro28661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28661(Registro28661 r) {
    return r.valor + r.id;
}
