// fichero 31561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31561;

Registro31561 crear_registro31561(int id) {
    Registro31561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31561(Registro31561 r) {
    return r.valor + r.id;
}
