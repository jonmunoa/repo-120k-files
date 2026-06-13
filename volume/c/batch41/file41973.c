// fichero 41973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41973;

Registro41973 crear_registro41973(int id) {
    Registro41973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41973(Registro41973 r) {
    return r.valor + r.id;
}
