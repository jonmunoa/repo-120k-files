// fichero 54957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54957;

Registro54957 crear_registro54957(int id) {
    Registro54957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54957(Registro54957 r) {
    return r.valor + r.id;
}
