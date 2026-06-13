// fichero 9349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9349;

Registro9349 crear_registro9349(int id) {
    Registro9349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9349(Registro9349 r) {
    return r.valor + r.id;
}
