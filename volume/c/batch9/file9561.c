// fichero 9561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9561;

Registro9561 crear_registro9561(int id) {
    Registro9561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9561(Registro9561 r) {
    return r.valor + r.id;
}
