// fichero 54353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54353;

Registro54353 crear_registro54353(int id) {
    Registro54353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54353(Registro54353 r) {
    return r.valor + r.id;
}
