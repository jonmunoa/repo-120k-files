// fichero 23801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23801;

Registro23801 crear_registro23801(int id) {
    Registro23801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23801(Registro23801 r) {
    return r.valor + r.id;
}
