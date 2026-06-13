// fichero 54877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54877;

Registro54877 crear_registro54877(int id) {
    Registro54877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54877(Registro54877 r) {
    return r.valor + r.id;
}
