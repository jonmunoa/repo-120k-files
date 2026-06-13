// fichero 9305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9305;

Registro9305 crear_registro9305(int id) {
    Registro9305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9305(Registro9305 r) {
    return r.valor + r.id;
}
