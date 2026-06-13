// fichero 34561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34561;

Registro34561 crear_registro34561(int id) {
    Registro34561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34561(Registro34561 r) {
    return r.valor + r.id;
}
