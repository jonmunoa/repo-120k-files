// fichero 19933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19933;

Registro19933 crear_registro19933(int id) {
    Registro19933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19933(Registro19933 r) {
    return r.valor + r.id;
}
