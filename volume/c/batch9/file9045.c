// fichero 9045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9045;

Registro9045 crear_registro9045(int id) {
    Registro9045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9045(Registro9045 r) {
    return r.valor + r.id;
}
