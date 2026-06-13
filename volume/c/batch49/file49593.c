// fichero 49593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49593;

Registro49593 crear_registro49593(int id) {
    Registro49593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49593(Registro49593 r) {
    return r.valor + r.id;
}
