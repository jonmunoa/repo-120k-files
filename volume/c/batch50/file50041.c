// fichero 50041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50041;

Registro50041 crear_registro50041(int id) {
    Registro50041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50041(Registro50041 r) {
    return r.valor + r.id;
}
