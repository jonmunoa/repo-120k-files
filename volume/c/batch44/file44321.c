// fichero 44321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44321;

Registro44321 crear_registro44321(int id) {
    Registro44321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44321(Registro44321 r) {
    return r.valor + r.id;
}
