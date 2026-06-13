// fichero 23621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23621;

Registro23621 crear_registro23621(int id) {
    Registro23621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23621(Registro23621 r) {
    return r.valor + r.id;
}
