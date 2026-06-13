// fichero 41405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41405;

Registro41405 crear_registro41405(int id) {
    Registro41405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41405(Registro41405 r) {
    return r.valor + r.id;
}
