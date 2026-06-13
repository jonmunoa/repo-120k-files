// fichero 14041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14041;

Registro14041 crear_registro14041(int id) {
    Registro14041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14041(Registro14041 r) {
    return r.valor + r.id;
}
