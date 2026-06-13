// fichero 41537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41537;

Registro41537 crear_registro41537(int id) {
    Registro41537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41537(Registro41537 r) {
    return r.valor + r.id;
}
