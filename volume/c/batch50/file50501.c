// fichero 50501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50501;

Registro50501 crear_registro50501(int id) {
    Registro50501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50501(Registro50501 r) {
    return r.valor + r.id;
}
