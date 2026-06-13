// fichero 49757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49757;

Registro49757 crear_registro49757(int id) {
    Registro49757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49757(Registro49757 r) {
    return r.valor + r.id;
}
