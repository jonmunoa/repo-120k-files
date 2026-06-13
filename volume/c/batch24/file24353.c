// fichero 24353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24353;

Registro24353 crear_registro24353(int id) {
    Registro24353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24353(Registro24353 r) {
    return r.valor + r.id;
}
