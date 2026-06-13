// fichero 11721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11721;

Registro11721 crear_registro11721(int id) {
    Registro11721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11721(Registro11721 r) {
    return r.valor + r.id;
}
