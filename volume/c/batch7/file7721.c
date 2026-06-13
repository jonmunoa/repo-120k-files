// fichero 7721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7721;

Registro7721 crear_registro7721(int id) {
    Registro7721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7721(Registro7721 r) {
    return r.valor + r.id;
}
