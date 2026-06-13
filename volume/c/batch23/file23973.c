// fichero 23973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23973;

Registro23973 crear_registro23973(int id) {
    Registro23973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23973(Registro23973 r) {
    return r.valor + r.id;
}
