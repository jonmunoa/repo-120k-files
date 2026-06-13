// fichero 34725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34725;

Registro34725 crear_registro34725(int id) {
    Registro34725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34725(Registro34725 r) {
    return r.valor + r.id;
}
