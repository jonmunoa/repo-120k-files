// fichero 23081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23081;

Registro23081 crear_registro23081(int id) {
    Registro23081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23081(Registro23081 r) {
    return r.valor + r.id;
}
