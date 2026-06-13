// fichero 46953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46953;

Registro46953 crear_registro46953(int id) {
    Registro46953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46953(Registro46953 r) {
    return r.valor + r.id;
}
