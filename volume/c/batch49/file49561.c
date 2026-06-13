// fichero 49561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49561;

Registro49561 crear_registro49561(int id) {
    Registro49561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49561(Registro49561 r) {
    return r.valor + r.id;
}
