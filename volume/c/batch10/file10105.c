// fichero 10105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10105;

Registro10105 crear_registro10105(int id) {
    Registro10105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10105(Registro10105 r) {
    return r.valor + r.id;
}
