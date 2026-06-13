// fichero 31353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31353;

Registro31353 crear_registro31353(int id) {
    Registro31353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31353(Registro31353 r) {
    return r.valor + r.id;
}
