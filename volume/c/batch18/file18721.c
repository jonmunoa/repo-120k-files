// fichero 18721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18721;

Registro18721 crear_registro18721(int id) {
    Registro18721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18721(Registro18721 r) {
    return r.valor + r.id;
}
