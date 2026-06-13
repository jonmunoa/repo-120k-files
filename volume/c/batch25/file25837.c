// fichero 25837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25837;

Registro25837 crear_registro25837(int id) {
    Registro25837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25837(Registro25837 r) {
    return r.valor + r.id;
}
