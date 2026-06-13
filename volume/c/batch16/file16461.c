// fichero 16461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16461;

Registro16461 crear_registro16461(int id) {
    Registro16461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16461(Registro16461 r) {
    return r.valor + r.id;
}
