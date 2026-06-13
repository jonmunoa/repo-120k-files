// fichero 23941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23941;

Registro23941 crear_registro23941(int id) {
    Registro23941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23941(Registro23941 r) {
    return r.valor + r.id;
}
