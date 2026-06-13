// fichero 3061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3061;

Registro3061 crear_registro3061(int id) {
    Registro3061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3061(Registro3061 r) {
    return r.valor + r.id;
}
