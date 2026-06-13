// fichero 38721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38721;

Registro38721 crear_registro38721(int id) {
    Registro38721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38721(Registro38721 r) {
    return r.valor + r.id;
}
