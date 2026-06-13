// fichero 7877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7877;

Registro7877 crear_registro7877(int id) {
    Registro7877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7877(Registro7877 r) {
    return r.valor + r.id;
}
