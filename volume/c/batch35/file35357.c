// fichero 35357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35357;

Registro35357 crear_registro35357(int id) {
    Registro35357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35357(Registro35357 r) {
    return r.valor + r.id;
}
