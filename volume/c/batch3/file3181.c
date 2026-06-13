// fichero 3181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3181;

Registro3181 crear_registro3181(int id) {
    Registro3181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3181(Registro3181 r) {
    return r.valor + r.id;
}
