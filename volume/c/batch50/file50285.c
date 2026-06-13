// fichero 50285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50285;

Registro50285 crear_registro50285(int id) {
    Registro50285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50285(Registro50285 r) {
    return r.valor + r.id;
}
