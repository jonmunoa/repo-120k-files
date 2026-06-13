// fichero 40721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40721;

Registro40721 crear_registro40721(int id) {
    Registro40721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40721(Registro40721 r) {
    return r.valor + r.id;
}
