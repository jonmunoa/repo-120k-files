// fichero 41133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41133;

Registro41133 crear_registro41133(int id) {
    Registro41133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41133(Registro41133 r) {
    return r.valor + r.id;
}
