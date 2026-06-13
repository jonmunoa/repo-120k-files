// fichero 17037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17037;

Registro17037 crear_registro17037(int id) {
    Registro17037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17037(Registro17037 r) {
    return r.valor + r.id;
}
