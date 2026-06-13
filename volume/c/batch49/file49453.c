// fichero 49453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49453;

Registro49453 crear_registro49453(int id) {
    Registro49453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49453(Registro49453 r) {
    return r.valor + r.id;
}
