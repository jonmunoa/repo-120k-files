// fichero 24069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24069;

Registro24069 crear_registro24069(int id) {
    Registro24069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24069(Registro24069 r) {
    return r.valor + r.id;
}
