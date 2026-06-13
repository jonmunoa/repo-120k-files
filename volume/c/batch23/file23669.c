// fichero 23669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23669;

Registro23669 crear_registro23669(int id) {
    Registro23669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23669(Registro23669 r) {
    return r.valor + r.id;
}
