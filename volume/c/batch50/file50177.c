// fichero 50177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50177;

Registro50177 crear_registro50177(int id) {
    Registro50177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50177(Registro50177 r) {
    return r.valor + r.id;
}
