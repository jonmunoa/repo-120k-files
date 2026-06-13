// fichero 49625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49625;

Registro49625 crear_registro49625(int id) {
    Registro49625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49625(Registro49625 r) {
    return r.valor + r.id;
}
