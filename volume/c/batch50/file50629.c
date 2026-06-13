// fichero 50629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50629;

Registro50629 crear_registro50629(int id) {
    Registro50629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50629(Registro50629 r) {
    return r.valor + r.id;
}
