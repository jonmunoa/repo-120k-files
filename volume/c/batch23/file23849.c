// fichero 23849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23849;

Registro23849 crear_registro23849(int id) {
    Registro23849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23849(Registro23849 r) {
    return r.valor + r.id;
}
