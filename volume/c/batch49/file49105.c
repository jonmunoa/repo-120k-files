// fichero 49105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49105;

Registro49105 crear_registro49105(int id) {
    Registro49105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49105(Registro49105 r) {
    return r.valor + r.id;
}
