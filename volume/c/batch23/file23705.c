// fichero 23705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23705;

Registro23705 crear_registro23705(int id) {
    Registro23705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23705(Registro23705 r) {
    return r.valor + r.id;
}
