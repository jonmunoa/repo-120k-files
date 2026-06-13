// fichero 49549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49549;

Registro49549 crear_registro49549(int id) {
    Registro49549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49549(Registro49549 r) {
    return r.valor + r.id;
}
