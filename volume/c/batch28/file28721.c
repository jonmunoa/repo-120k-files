// fichero 28721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28721;

Registro28721 crear_registro28721(int id) {
    Registro28721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28721(Registro28721 r) {
    return r.valor + r.id;
}
