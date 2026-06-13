// fichero 12593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12593;

Registro12593 crear_registro12593(int id) {
    Registro12593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12593(Registro12593 r) {
    return r.valor + r.id;
}
