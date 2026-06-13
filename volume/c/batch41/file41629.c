// fichero 41629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41629;

Registro41629 crear_registro41629(int id) {
    Registro41629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41629(Registro41629 r) {
    return r.valor + r.id;
}
