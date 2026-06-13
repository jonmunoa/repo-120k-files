// fichero 18381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18381;

Registro18381 crear_registro18381(int id) {
    Registro18381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18381(Registro18381 r) {
    return r.valor + r.id;
}
