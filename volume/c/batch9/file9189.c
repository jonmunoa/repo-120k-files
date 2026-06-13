// fichero 9189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9189;

Registro9189 crear_registro9189(int id) {
    Registro9189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9189(Registro9189 r) {
    return r.valor + r.id;
}
