// fichero 26757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26757;

Registro26757 crear_registro26757(int id) {
    Registro26757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26757(Registro26757 r) {
    return r.valor + r.id;
}
