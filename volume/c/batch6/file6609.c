// fichero 6609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6609;

Registro6609 crear_registro6609(int id) {
    Registro6609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6609(Registro6609 r) {
    return r.valor + r.id;
}
