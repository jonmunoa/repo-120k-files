// fichero 17001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17001;

Registro17001 crear_registro17001(int id) {
    Registro17001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17001(Registro17001 r) {
    return r.valor + r.id;
}
