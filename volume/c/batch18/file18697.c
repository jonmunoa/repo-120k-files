// fichero 18697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18697;

Registro18697 crear_registro18697(int id) {
    Registro18697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18697(Registro18697 r) {
    return r.valor + r.id;
}
