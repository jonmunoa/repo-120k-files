// fichero 21721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21721;

Registro21721 crear_registro21721(int id) {
    Registro21721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21721(Registro21721 r) {
    return r.valor + r.id;
}
