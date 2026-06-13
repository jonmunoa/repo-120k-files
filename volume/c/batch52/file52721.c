// fichero 52721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52721;

Registro52721 crear_registro52721(int id) {
    Registro52721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52721(Registro52721 r) {
    return r.valor + r.id;
}
