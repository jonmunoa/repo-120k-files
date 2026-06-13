// fichero 54293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54293;

Registro54293 crear_registro54293(int id) {
    Registro54293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54293(Registro54293 r) {
    return r.valor + r.id;
}
