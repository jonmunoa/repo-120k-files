// fichero 49929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49929;

Registro49929 crear_registro49929(int id) {
    Registro49929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49929(Registro49929 r) {
    return r.valor + r.id;
}
