// fichero 23657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23657;

Registro23657 crear_registro23657(int id) {
    Registro23657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23657(Registro23657 r) {
    return r.valor + r.id;
}
