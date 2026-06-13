// fichero 50825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50825;

Registro50825 crear_registro50825(int id) {
    Registro50825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50825(Registro50825 r) {
    return r.valor + r.id;
}
