// fichero 54265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54265;

Registro54265 crear_registro54265(int id) {
    Registro54265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54265(Registro54265 r) {
    return r.valor + r.id;
}
