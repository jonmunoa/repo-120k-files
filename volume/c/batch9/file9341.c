// fichero 9341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9341;

Registro9341 crear_registro9341(int id) {
    Registro9341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9341(Registro9341 r) {
    return r.valor + r.id;
}
