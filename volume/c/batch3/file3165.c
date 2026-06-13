// fichero 3165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3165;

Registro3165 crear_registro3165(int id) {
    Registro3165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3165(Registro3165 r) {
    return r.valor + r.id;
}
