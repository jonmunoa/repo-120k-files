// fichero 23001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23001;

Registro23001 crear_registro23001(int id) {
    Registro23001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23001(Registro23001 r) {
    return r.valor + r.id;
}
