// fichero 47585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47585;

Registro47585 crear_registro47585(int id) {
    Registro47585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47585(Registro47585 r) {
    return r.valor + r.id;
}
