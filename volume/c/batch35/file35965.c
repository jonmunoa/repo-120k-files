// fichero 35965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35965;

Registro35965 crear_registro35965(int id) {
    Registro35965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35965(Registro35965 r) {
    return r.valor + r.id;
}
