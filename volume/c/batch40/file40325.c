// fichero 40325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40325;

Registro40325 crear_registro40325(int id) {
    Registro40325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40325(Registro40325 r) {
    return r.valor + r.id;
}
