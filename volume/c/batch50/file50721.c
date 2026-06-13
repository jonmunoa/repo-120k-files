// fichero 50721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50721;

Registro50721 crear_registro50721(int id) {
    Registro50721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50721(Registro50721 r) {
    return r.valor + r.id;
}
