// fichero 24445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24445;

Registro24445 crear_registro24445(int id) {
    Registro24445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24445(Registro24445 r) {
    return r.valor + r.id;
}
