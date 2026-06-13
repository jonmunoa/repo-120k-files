// fichero 3757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3757;

Registro3757 crear_registro3757(int id) {
    Registro3757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3757(Registro3757 r) {
    return r.valor + r.id;
}
