// fichero 3913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3913;

Registro3913 crear_registro3913(int id) {
    Registro3913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3913(Registro3913 r) {
    return r.valor + r.id;
}
