// fichero 6721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6721;

Registro6721 crear_registro6721(int id) {
    Registro6721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6721(Registro6721 r) {
    return r.valor + r.id;
}
