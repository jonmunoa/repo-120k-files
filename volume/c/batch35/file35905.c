// fichero 35905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35905;

Registro35905 crear_registro35905(int id) {
    Registro35905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35905(Registro35905 r) {
    return r.valor + r.id;
}
