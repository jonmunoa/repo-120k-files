// fichero 23721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23721;

Registro23721 crear_registro23721(int id) {
    Registro23721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23721(Registro23721 r) {
    return r.valor + r.id;
}
