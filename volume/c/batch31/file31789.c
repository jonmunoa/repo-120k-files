// fichero 31789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31789;

Registro31789 crear_registro31789(int id) {
    Registro31789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31789(Registro31789 r) {
    return r.valor + r.id;
}
