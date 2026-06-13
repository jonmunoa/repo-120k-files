// fichero 24013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24013;

Registro24013 crear_registro24013(int id) {
    Registro24013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24013(Registro24013 r) {
    return r.valor + r.id;
}
