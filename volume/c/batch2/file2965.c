// fichero 2965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2965;

Registro2965 crear_registro2965(int id) {
    Registro2965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2965(Registro2965 r) {
    return r.valor + r.id;
}
