// fichero 2621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2621;

Registro2621 crear_registro2621(int id) {
    Registro2621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2621(Registro2621 r) {
    return r.valor + r.id;
}
