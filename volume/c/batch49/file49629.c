// fichero 49629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49629;

Registro49629 crear_registro49629(int id) {
    Registro49629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49629(Registro49629 r) {
    return r.valor + r.id;
}
