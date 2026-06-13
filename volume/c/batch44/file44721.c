// fichero 44721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44721;

Registro44721 crear_registro44721(int id) {
    Registro44721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44721(Registro44721 r) {
    return r.valor + r.id;
}
