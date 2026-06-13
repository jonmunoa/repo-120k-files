// fichero 3705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3705;

Registro3705 crear_registro3705(int id) {
    Registro3705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3705(Registro3705 r) {
    return r.valor + r.id;
}
