// fichero 27721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27721;

Registro27721 crear_registro27721(int id) {
    Registro27721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27721(Registro27721 r) {
    return r.valor + r.id;
}
