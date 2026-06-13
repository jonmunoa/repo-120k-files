// fichero 49609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49609;

Registro49609 crear_registro49609(int id) {
    Registro49609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49609(Registro49609 r) {
    return r.valor + r.id;
}
