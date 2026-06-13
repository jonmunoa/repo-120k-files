// fichero 37965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37965;

Registro37965 crear_registro37965(int id) {
    Registro37965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37965(Registro37965 r) {
    return r.valor + r.id;
}
