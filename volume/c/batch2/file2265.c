// fichero 2265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2265;

Registro2265 crear_registro2265(int id) {
    Registro2265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2265(Registro2265 r) {
    return r.valor + r.id;
}
