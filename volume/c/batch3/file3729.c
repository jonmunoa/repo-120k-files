// fichero 3729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3729;

Registro3729 crear_registro3729(int id) {
    Registro3729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3729(Registro3729 r) {
    return r.valor + r.id;
}
