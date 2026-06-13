// fichero 49677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49677;

Registro49677 crear_registro49677(int id) {
    Registro49677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49677(Registro49677 r) {
    return r.valor + r.id;
}
