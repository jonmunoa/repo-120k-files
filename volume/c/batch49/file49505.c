// fichero 49505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49505;

Registro49505 crear_registro49505(int id) {
    Registro49505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49505(Registro49505 r) {
    return r.valor + r.id;
}
