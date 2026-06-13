// fichero 50245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50245;

Registro50245 crear_registro50245(int id) {
    Registro50245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50245(Registro50245 r) {
    return r.valor + r.id;
}
