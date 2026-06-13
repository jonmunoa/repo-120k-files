// fichero 45041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45041;

Registro45041 crear_registro45041(int id) {
    Registro45041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45041(Registro45041 r) {
    return r.valor + r.id;
}
