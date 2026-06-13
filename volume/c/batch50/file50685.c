// fichero 50685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50685;

Registro50685 crear_registro50685(int id) {
    Registro50685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50685(Registro50685 r) {
    return r.valor + r.id;
}
