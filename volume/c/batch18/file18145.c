// fichero 18145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18145;

Registro18145 crear_registro18145(int id) {
    Registro18145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18145(Registro18145 r) {
    return r.valor + r.id;
}
