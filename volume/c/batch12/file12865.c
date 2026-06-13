// fichero 12865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12865;

Registro12865 crear_registro12865(int id) {
    Registro12865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12865(Registro12865 r) {
    return r.valor + r.id;
}
