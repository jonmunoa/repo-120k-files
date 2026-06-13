// fichero 32985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32985;

Registro32985 crear_registro32985(int id) {
    Registro32985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32985(Registro32985 r) {
    return r.valor + r.id;
}
