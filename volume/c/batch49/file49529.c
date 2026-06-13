// fichero 49529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49529;

Registro49529 crear_registro49529(int id) {
    Registro49529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49529(Registro49529 r) {
    return r.valor + r.id;
}
