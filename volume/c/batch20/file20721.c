// fichero 20721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20721;

Registro20721 crear_registro20721(int id) {
    Registro20721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20721(Registro20721 r) {
    return r.valor + r.id;
}
